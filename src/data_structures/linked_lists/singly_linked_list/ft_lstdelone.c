/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:29:02 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 21:31:26 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "singly_linked_list.h"

/* Frees the node LST content using the function DEL.  */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*node;

	if (!lst || !del)
		return ;
	node = lst;
	lst = lst->next;
	del(node->content);
	free(node);
}
