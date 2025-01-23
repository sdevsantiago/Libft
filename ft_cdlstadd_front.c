/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlstadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:15:58 by sede-san          #+#    #+#             */
/*   Updated: 2025/01/22 19:52:34 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_cdlstadd_front(t_cdlist **lst, t_cdlist *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	(ft_cdlstlast(*lst))->next = new;
	*lst = new;
}
