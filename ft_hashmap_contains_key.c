/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmap_contains_key.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:26:41 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/27 19:30:21 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a key exists in the hashmap.
 *
 * This function searches for a given key in the hashmap by computing its hash,
 * locating the appropriate bucket, and traversing the collision chain to find
 * a matching key using the hashmap's comparison function.
 *
 * @param hashmap Pointer to the hashmap structure to search in
 * @param key     Pointer to the key to search for
 *
 * @return 1 if the key exists in the hashmap, 0 if not found or on error
 */
int	ft_hashmap_contains_key(
	t_hashmap *hashmap,
	const void *key
) {
	int		contains;
	int		key_hash;
	t_list	*list;

	if (hashmap == NULL || hashmap->capacity < 1 || key == NULL)
		return (0);
	key_hash = ft_iabs(hashmap->hash_func(key) % hashmap->capacity);
	list = hashmap->buckets[key_hash];
	contains = 0;
	while (contains == 0 && list != NULL)
	{
		if (hashmap->comp_func(key, ((t_map_entry *)list->content)->key) == 0)
			contains = 1;
		else
			list = list->next;
	}
	return (contains);
}
