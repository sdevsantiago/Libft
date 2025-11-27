/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iabs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:41:08 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/27 10:46:22 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Computes the absolute value of an integer.
 *
 * This function returns the absolute value of the given integer parameter.
 * If the input is negative, it returns the positive equivalent. If the input
 * is already positive or zero, it returns the value unchanged.
 *
 * @param n The integer value to compute the absolute value of.
 *
 * @return The absolute value of n. Always returns a non-negative integer.
 *
 * @note This function does not handle integer overflow. If n is INT_MIN,
 *       the behavior is undefined due to two's complement representation.
 */
int	ft_iabs(
	int n
) {
	if (n < 0)
		return (-n);
	return (n);
}
