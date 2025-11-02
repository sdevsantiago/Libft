/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:07:41 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 20:03:10 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

/* Finds the first ocurrence of C in the string S.  */
char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
