/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmap_clear_keys.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:28:36 by sede-san          #+#    #+#             */
/*   Updated: 2025/12/01 17:18:56 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	clear_key(t_map_entry *entry);

/**
 * @brief Clears all keys from a hashmap and deallocates the hashmap structure.
 *
 * This function iterates through all buckets in the hashmap, freeing the keys
 * of each entry using the clear_key function, then deallocates all nodes,
 * buckets array, and the hashmap structure itself. The hashmap pointer is
 * set to NULL after deallocation.
 *
 * @param hashmap Double pointer to the hashmap to be cleared. If hashmap or
 *                *hashmap is NULL, the function returns without performing
 *                any operations.
 *
 * @note This function only frees the keys of the entries, not the values.
 *       The hashmap structure and all its internal components are completely
 *       deallocated after this operation.
 *
 * @warning After calling this function, the hashmap pointer will be set to NULL
 *          and should not be used until properly reinitialized.
 */
void	ft_hashmap_clear_keys(
	t_hashmap **hashmap
) {
	size_t		i;
	t_list		*list;
	t_list		*node;
	t_map_entry	*entry;

	if (hashmap == NULL || *hashmap == NULL)
		return ;
	i = -1;
	while (++i < (*hashmap)->capacity)
	{
		list = (*hashmap)->buckets[i];
		while (list != NULL)
		{
			node = list;
			list = list->next;
			entry = (t_map_entry *)node->content;
			clear_key(entry);
			free(node);
		}
	}
	free((*hashmap)->buckets);
	free(*hashmap);
	*hashmap = NULL;
}

/**
 * @brief Frees the key of a hashmap entry and the entry structure itself.
 *
 * This static helper function deallocates the memory used by a hashmap entry's
 * key and then frees the entry structure. It is typically used when clearing
 * a hashmap where only the keys need to be freed (not the values).
 *
 * @param entry Pointer to the map entry to clear. If NULL, the function returns
 *              immediately without performing any operation.
 *
 * @note This function assumes that the key was dynamically allocated and needs
 *       to be freed. The value associated with the entry is not freed.
 * @warning After calling this function, the entry pointer becomes invalid and
 *          should not be used.
 */
static void	clear_key(t_map_entry *entry)
{
	if (entry == NULL)
		return ;
	free((void *)entry->key);
	free(entry);
}
