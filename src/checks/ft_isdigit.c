/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:08:50 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 19:08:05 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checks.h"

/* Checks if the passed character is a number.  */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
