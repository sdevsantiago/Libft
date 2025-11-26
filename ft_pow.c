/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:04:11 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/26 10:00:44 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Computes `base` raised to the power of `exponent`.
 *
 * @param base The base value.
 * @param exponent The exponent value.
 *
 * @return The result of `base` raised to the power of `exponent`. If `exponent`
 * is 0, return 1. Else if `exponent` is negative, return is 1 divided by `base`
 * raised to the power of `-exponent`.
 */
double	ft_pow(
	double base,
	double exponent
) {
	double	result;

	if (exponent == 0)
		return (1);
	else if (exponent < 0)
		return (1 / ft_pow(base, -exponent));
	result = 1;
	while (exponent-- > 0)
		result *= base;
	return (result);
}
