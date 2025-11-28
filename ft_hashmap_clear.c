/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmap_clear.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:28:36 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/28 01:07:59 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	clear_entry(t_map_entry *entry, void (*del)(void *));

/**
 * @brief Deallocates all entries in a hashmap and the hashmap itself.
 *
 * This function iterates through all buckets in the hashmap, freeing each node
 * in the collision resolution lists. For each entry, it calls the provided
 * deletion function to properly clean up the content, then frees the node
 * itself. Finally, it deallocates the hashmap structure.
 *
 * @param hashmap Pointer to the hashmap to be cleared and freed
 * @param del Function pointer to deallocate the content of each entry
 *
 * @warning This function frees the hashmap itself, making it unusable after
 * the call as its pointer is set to NULL
 *
 * @note If either hashmap or del is NULL, the function returns without
 * performing any operation
 * @note After this function is called, the hashmap pointer becomes invalid
 */
void	ft_hashmap_clear(
	t_hashmap *hashmap,
	void (*del)(void *)
) {
	size_t		i;
	t_list		*list;
	t_list		*node;
	t_map_entry	*entry;

	if (hashmap == NULL || del == NULL)
		return ;
	i = -1;
	while (++i < hashmap->capacity)
	{
		list = hashmap->buckets[i];
		while (list != NULL)
		{
			node = list;
			list = list->next;
			entry = (t_map_entry *)node->content;
			clear_entry(entry, del);
			free(node);
		}
	}
	free(hashmap->buckets);
	free(hashmap);
	hashmap = NULL;
}

/**
 * @brief Clears a single hash map entry by freeing its memory.
 *
 * This static helper function deallocates memory for a hash map entry,
 * including its key and value. The function uses a provided deletion
 * function to properly free the value's memory.
 *
 * @param entry Pointer to the hash map entry to be cleared. If NULL,
 *              the function returns without performing any operation.
 * @param del   Function pointer used to free the entry's value. If NULL,
 *              the function returns without performing any operation.
 *
 * @note The key is assumed to be dynamically allocated and is freed
 *       using the standard free() function.
 * @note The caller is responsible for ensuring the deletion function
 *       is appropriate for the value's data type.
 */
static void	clear_entry(t_map_entry *entry, void (*del)(void *))
{
	if (entry == NULL || del == NULL)
		return ;
	free((void *)entry->key);
	del(entry->value);
	free(entry);
}
