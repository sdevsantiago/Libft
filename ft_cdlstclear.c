/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlstclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:35:25 by sede-san          #+#    #+#             */
/*   Updated: 2025/01/22 19:51:58 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_cdlstclear(t_cdlist **lst, void (*del)(void *))
{
	t_cdlist	*node;
	t_cdlist	*first;

	if (!lst || !del)
		return ;
	first = *lst;
	while (*lst)
	{
		node = *lst;
		ft_cdlstdelone(node, del);
		if ((*lst)->next == first)
			break ;
		*lst = (*lst)->next;
	}
}
