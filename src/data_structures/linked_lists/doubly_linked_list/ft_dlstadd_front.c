/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:31:36 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/03 02:13:22 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../libft.h"

/* Adds the node NEW to the first position of the list DLST.  */
void	ft_dlstadd_front(t_dlist **lst, t_dlist *new)
{
	if (!lst || !new)
		return ;
	(*lst)->previous = new;
	new->next = *lst;
	*lst = new;
}
