/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:27:33 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 20:35:51 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "circular_singly_linked_list.h"

void	ft_clstadd_front(t_clist **lst, t_clist *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	(ft_clstlast(*lst))->next = new;
	*lst = new;
}
