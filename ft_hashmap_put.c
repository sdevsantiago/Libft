/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmap_put.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:59:21 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/27 20:49:46 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*replace_value(void *new_value, t_map_entry *entry);
static void	add_entry(t_list **list, const void *key, void *new_value);

/**
 * @brief Inserts or updates a key-value pair in the hashmap
 *
 * This function adds a new key-value pair to the hashmap or updates the value
 * of an existing key. If the key already exists, the old value is replaced
 * with the new value and the old value is returned. If the key doesn't exist,
 * a new entry is created, hashmap's size is incremented by 1 and NULL is
 * returned.
 *
 * @param hashmap   Pointer to the hashmap structure
 * @param key       Pointer to the key to insert or update
 * @param new_value Pointer to the new value to associate with the key
 *
 * @return Pointer to the old value if key existed, NULL if key was new or on
 * error
 *
 * @warning If the old value is returned, it must be freed by the caller to
 * prevent memory leaks
 *
 * @note Returns NULL if any required parameter is NULL or if hashmap
 * capacity < 1
 *
 * @bug
 */
void	*ft_hashmap_put(
	t_hashmap *hashmap,
	const void *key,
	void *new_value
) {
	void		*old_value;
	int			key_hash;
	t_list		*node;
	t_map_entry	*entry;

	if (hashmap == NULL || key == NULL || hashmap->capacity < 1
		|| hashmap->hash_func == NULL || hashmap->comp_func == NULL)
		return (NULL);
	key_hash = ft_iabs(hashmap->hash_func(key) % hashmap->capacity);
	node = hashmap->buckets[key_hash];
	while (node != NULL)
	{
		entry = (t_map_entry *)node->content;
		if (hashmap->comp_func(key, entry->key) == 0)
		{
			old_value = replace_value(new_value, entry);
			return (old_value);
		}
		node = node->next;
	}
	add_entry(&hashmap->buckets[key_hash], key, new_value);
	hashmap->size++;
	return (NULL);
}

static void	*replace_value(
	void *new_value,
	t_map_entry *entry
) {
	void	*old_value;

	old_value = entry->value;
	entry->value = new_value;
	return (old_value);
}

/**
 * @brief Adds a new key-value entry to a bucket.
 *
 * Creates a new map entry structure containing the provided key and value,
 * then adds it to the specified linked list. If memory allocation fails, the
 * function returns without adding the entry.
 *
 * @param list  Pointer to the linked list where the entry will be added
 * @param key   Pointer to the key data
 * @param value Pointer to the value data associated with the key
 *
 * @note The function does not perform error handling beyond checking malloc
 *       failure. The caller is responsible for ensuring valid parameters.
 * @note Memory ownership of key and value is transferred to the map entry.
 */
static void	add_entry(
	t_list **list,
	const void *key,
	void *new_value
) {
	t_map_entry	*new_entry;

	new_entry = (t_map_entry *)malloc(sizeof(t_map_entry));
	if (new_entry == NULL)
		return ;
	new_entry->key = key;
	new_entry->value = new_value;
	ft_lstadd_front(list, ft_lstnew(new_entry));
}
