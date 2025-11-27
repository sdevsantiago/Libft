/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmap_new.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:03:42 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/27 18:36:29 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Initializes a new hashmap with the specified parameters.
 *
 * Creates and initializes a new hashmap structure with the given initial
 * capacity, hash function, and comparison function. The hashmap uses separate
 * chaining with linked lists to handle collisions.
 *
 * @param initial_capacity The initial number of buckets in the hashmap (must
 *                         be >= 1)
 * @param hash_func        Pointer to the hash function used to compute hash
 *                         values for keys
 * @param comp_func        Pointer to the comparison function used to compare
 *                         keys
 *
 * @return Pointer to the newly created hashmap on success, NULL on failure
 *
 * @warning The caller is responsible for freeing the returned hashmap using the
 *          `ft_hashmap_clear` function when no longer needed to prevent memory
 *          leaks.
 *
 * @note The function will return NULL if initial_capacity is less than 1,
 *       `hash_func` or `comp_func` are NULL or memory allocation fails
 * @note `initial_capacity`'s value has direct impact on performance, as a
 *       bigger value will use more memory, will grow less frecuently if needed
 *       (not yet implemented) but will be less prone to face with collisions.
 *       Higher values are recommended if more entries are expected to be stored
 *       at once.
 */
t_hashmap	*ft_hashmap_new(
	size_t initial_capacity,
	t_hash_func hash_func,
	t_comp_func comp_func
) {
	t_hashmap	*hashmap;

	if (initial_capacity < 1 || hash_func == NULL || comp_func == NULL)
		return (NULL);
	hashmap = (t_hashmap *)malloc(sizeof(t_hashmap));
	if (hashmap == NULL)
		return (NULL);
	hashmap->buckets = (t_list **)ft_calloc(initial_capacity, sizeof(t_list *));
	if (hashmap->buckets == NULL)
	{
		free(hashmap);
		hashmap = NULL;
		return (NULL);
	}
	hashmap->size = 0;
	hashmap->capacity = initial_capacity;
	hashmap->hash_func = hash_func;
	hashmap->comp_func = comp_func;
	return (hashmap);
}
