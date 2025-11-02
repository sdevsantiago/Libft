/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 21:57:46 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 21:28:56 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "singly_linked_list.h"

/* Adds the node NEW to the last position of the list LST.  */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_ptr;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		lst_ptr = ft_lstlast(*lst);
		lst_ptr->next = new;
	}
}
