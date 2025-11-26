/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:05:10 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/26 10:00:33 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Computes a hashcode for the string `str`.
 *
 * This function uses a simple polynomial rolling hash algorithm. The
 * hashcode is computed by applying the following formula:
 * ```
 * 	s[0] * 31^(n-1) + s[1] * 31^(n-2) + ... + s[n-1]
 * ```
 * Where `n` is the length of the string `s` and `s[i]` is the ASCII value of
 * the character at index `i`.
 *
 * @param str The input string to hash.
 *
 * @return The computed hashcode as an integer.
 * If `str` is empty, the hash is 0.
 *
 * @warning This function is NOT null-safe; passing a NULL pointer will result
 * in a segmentation fault.
 *
 * @note This hash function is similar to the one used in Java's
 * `String.hashCode()`.
 */
int	ft_hashstr(
	const char *str
) {
	int		hash;
	size_t	len;
	size_t	i;

	hash = 0;
	len = ft_strlen(str);
	i = -1;
	if (len == 0)
		return (0);
	while (++i < len - 1)
		hash += str[i] * ft_pow(31, len - (i + 1));
	hash += str[i];
	return (hash);
}
