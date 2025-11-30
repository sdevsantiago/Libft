/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmap_lstclear.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 03:05:19 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/30 03:07:33 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_hashmap_lstclear(
	t_list **lst
) {
	t_list	*node;

	if (!lst)
		return ;
	while (*lst)
	{
		node = *lst;
		*lst = (*lst)->next;
		free(node);
	}
	*lst = NULL;
}
