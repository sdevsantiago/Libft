/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:04:46 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 21:30:33 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "singly_linked_list.h"

/* Iterates the list LST and applies the function F to the
   content of each node.  */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
