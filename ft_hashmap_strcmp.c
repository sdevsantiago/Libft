/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmap_strcmp.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 18:32:50 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/29 20:10:26 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hashmap_strcmp(
	const void *s1,
	const void *s2
) {
	return (ft_strcmp((const char *)s1, (const char *)s2));
}
