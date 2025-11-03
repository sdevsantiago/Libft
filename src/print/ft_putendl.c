/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:55:02 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/03 02:10:27 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* Prints a string followed by a new line.  */
void	ft_putendl(char *s)
{
	ft_putendl_fd(s, STDOUT_FILENO);
}
