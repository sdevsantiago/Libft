/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:38:00 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 19:39:23 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"

/* Erases the data in the first N bytes of the memory location
   pointed to by S.  */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
