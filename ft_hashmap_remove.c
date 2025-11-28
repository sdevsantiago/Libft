/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmap_remove.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:28:08 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/28 15:18:11 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	remove_node(t_list **bucket, t_list *node, t_list *node_prev);

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

	if (hashmap == NULL || key == NULL || hashmap->size == 0)
		return (NULL);
	key_hash = ft_iabs(hashmap->hash_func(key) % hashmap->capacity);
	node = hashmap->buckets[key_hash];
	node_prev = NULL;
	while (node != NULL)
	{
		entry = (t_map_entry *)node->content;
		if (hashmap->comp_func(key, entry->key) == 0)
		{
			removed_value = entry->value;
			remove_node(&hashmap->buckets[key_hash], node, node_prev);
			hashmap->size--;
			return (removed_value);
		}
		node_prev = node;
		node = node->next;
	}
	return (NULL);
}

/**
 * @brief Removes a node from a hash map bucket and frees associated memory.
 *
 * This function removes a specified node from a linked list bucket by updating
 * the previous node's next pointer or the bucket head pointer if removing the
 * first node. It then frees all memory associated with the node including the
 * key string, the map entry structure, and the list node itself.
 *
 * @param bucket    Pointer to the bucket (linked list head) pointer
 * @param node      The node to be removed from the bucket
 * @param node_prev The previous node in the list, or NULL if removing the
 *                  first node
 */
static void	remove_node(
	t_list **bucket,
	t_list *node,
	t_list *node_prev
) {
	t_map_entry	*entry;

	if (node_prev == NULL)
		*bucket = node->next;
	else
		node_prev->next = node->next;
	entry = (t_map_entry *)node->content;
	free((void *)entry->key);
	free(entry);
	free(node);
}
