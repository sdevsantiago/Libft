/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:59:02 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 20:16:49 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

/* Appends the NUL-terminated string SRC to the end of DST.  */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst && dst[i] && i < size)
		i++;
	j = ft_strlen(src);
	if (size <= i)
		return (size + j);
	size -= i;
	dst += i;
	while (size-- > 1 && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (i + j);
}
