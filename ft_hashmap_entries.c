/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmap_entries.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 18:08:13 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/30 03:01:43 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_hashmap_entries(
	t_hashmap *hashmap
) {
	t_list		*entries;
	t_list		*node;
	t_list		*new_node;
	size_t		i;

	if (hashmap == NULL || hashmap->size < 1)
		return (NULL);
	entries = NULL;
	i = -1;
	while (++i < hashmap->capacity)
	{
		node = hashmap->buckets[i];
		while (node != NULL)
		{
			new_node = ft_lstnew(node->content);
			if (new_node == NULL)
			{
				// clear
				return (NULL);
			}
			ft_lstadd_front(&entries, new_node);
			node = node->next;
		}
	}
	return (entries);
}
