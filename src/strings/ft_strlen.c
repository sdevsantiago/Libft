/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:11:01 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 20:17:45 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

/* Measures a string's length.  */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
