/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 21:54:05 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 21:30:29 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "singly_linked_list.h"

/* Returns the last element of the list LST.  */
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
