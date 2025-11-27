/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmap_remove.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:28:08 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/27 20:16:34 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	reorganize_bucket(t_list **bucket, t_list *node, t_list *node_prev);
static void	remove_node(t_list *node);

//! too many lines
//! too many lines
//! too many lines

/**
 * @brief Removes a key-value pair from the hashmap and returns the removed
 * value.
 *
 * This function searches for the specified key in the hashmap and removes the
 * corresponding key-value pair if found. The function uses the hashmap's hash
 * function to locate the appropriate bucket and the comparison function to
 * identify the correct entry within the bucket's linked list. If found,
 * hashmap's size is decreased by 1.
 *
 * @param hashmap Pointer to the hashmap structure from which to remove the
 *                entry. Must not be NULL and must have valid hash_func and
 *                comp_func.
 * @param key     Pointer to the key to be removed. Must not be NULL.
 *
 * @return Pointer to the value that was removed from the hashmap, or NULL if
 *         the key was not found, the hashmap is empty or on error.
 *
 * @warning If a value is returned, it must be freed by the caller to prevent
 *          memory leaks
 */
void	*ft_hashmap_remove(
	t_hashmap *hashmap,
	void *key
) {
	void		*removed_value;
	int			key_hash;
	t_list		*node;
	t_list		*node_prev;
	t_map_entry	*entry;

	if (hashmap == NULL || hashmap->capacity < 1 || hashmap->size == 0
		|| key == NULL)
		return (NULL);
	key_hash = ft_iabs(hashmap->hash_func(key) % hashmap->capacity);
	node = hashmap->buckets[key_hash];
	node_prev = NULL;
	removed_value = NULL;
	while (removed_value == NULL && node != NULL)
	{
		entry = (t_map_entry *)node->content;
		if (hashmap->comp_func(key, entry->key) == 0)
		{
			removed_value = entry->value;
			reorganize_bucket(&hashmap->buckets[key_hash], node, node_prev);
			remove_node(node);
			hashmap->size--;
			return (remove_node);
		}
		node_prev = node;
		node = node->next;
	}
	return (NULL);
}

static void	reorganize_bucket(
	t_list **bucket,
	t_list *node,
	t_list *node_prev
) {
	if (node_prev == NULL)
		*bucket = node->next;
	else
		node_prev->next = node->next;
}

static void	remove_node(
	t_list *node
) {
	t_map_entry *entry;

	entry = (t_map_entry *)node->content;
	free(entry->value);
	free(node->content);
	free(node);
}
