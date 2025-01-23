/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clstlast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:12:32 by sede-san          #+#    #+#             */
/*   Updated: 2025/01/22 18:26:13 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_clstiter(t_clist *lst, void (*f)(void *))
{
	t_clist	*first;

	if (!lst)
		return (NULL);
	first = lst;
	while (lst->next != first)
		lst = lst->next;
	return (lst);
}
