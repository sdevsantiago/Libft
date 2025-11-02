/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:19:58 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 19:56:01 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

/* Prints a string in the FD given.  */
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
