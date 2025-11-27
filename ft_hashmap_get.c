/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmap_get.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:52:07 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/27 19:30:06 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Retrieves the value associated with the given key from the hashmap.
 *
 * This function computes the hash of the key, finds the appropriate bucket,
 * and searches through the collision chain to find the matching key-value
 * pair. Uses the hashmap's comparison function to match keys.
 *
 * @param hashmap   Pointer to the hashmap structure
 * @param key       Pointer to the key to search for
 *
 * @return Pointer to the value associated with the key, or NULL if not found
 *         or on error
 */
void	*ft_hashmap_get(
	t_hashmap *hashmap,
	const void *key
) {
	void	*value;
	int		key_hash;
	t_list	*list;

	if (hashmap == NULL || hashmap->capacity < 1 || key == NULL)
		return (NULL);
	key_hash = ft_iabs(hashmap->hash_func(key) % hashmap->capacity);
	list = hashmap->buckets[key_hash];
	value = NULL;
	while (value == NULL && list != NULL)
	{
		if (hashmap->comp_func(key, ((t_map_entry *)list->content)->key) == 0)
			value = (((t_map_entry *)list->content)->value);
		else
			list = list->next;
	}
	return (value);
}
