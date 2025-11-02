/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:38:09 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 19:07:52 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checks.h"

/* Checks if the passed character is within the 7-bit ASCII character set.  */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
