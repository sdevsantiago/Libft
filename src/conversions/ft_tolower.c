/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:56:58 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 19:32:42 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversions.h"

/* Converts an uppercase letter to lowercase.  */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
