/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_nodes.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 03:46:03 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/30 03:50:18 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	no_del_content(void *content);

void	ft_lstclear_nodes(
	t_list **lst
) {
	ft_lstclear(lst, no_del_content);
}

static void	no_del_content(
	void *content
) {
	(void)content;
}
