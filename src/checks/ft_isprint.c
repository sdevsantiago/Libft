/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:44:36 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 19:08:31 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checks.h"

/* Checks if the passed character is printable.  */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
