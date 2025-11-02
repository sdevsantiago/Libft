/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:45:35 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 20:43:21 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"

/* Swaps the values of A and B.  */
void	ft_swap(void *a, void *b)
{
	*(unsigned char *)a ^= *(unsigned char *)b;
	*(unsigned char *)b ^= *(unsigned char *)a;
	*(unsigned char *)a ^= *(unsigned char *)b;
}
