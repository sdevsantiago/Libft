/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:33:47 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 20:38:41 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doubly_linked_list.h"

/* Deletes from the node DLST onwards.  */
void	ft_dlstclear(t_dlist **lst, void (*del)(void *))
{
	t_dlist	*node;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		node = *lst;
		*lst = (*lst)->next;
		ft_dlstdelone(node, del);
	}
	*lst = NULL;
}
