/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:48:38 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 19:50:45 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

/* Prints a character.  */
void	ft_putchar(char c)
{
	ft_putchar_fd(c, STDOUT_FILENO);
}
