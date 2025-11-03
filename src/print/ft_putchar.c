/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:48:38 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/03 02:10:22 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* Prints a character.  */
void	ft_putchar(char c)
{
	ft_putchar_fd(c, STDOUT_FILENO);
}
