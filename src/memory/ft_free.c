/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:57:28 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 19:42:12 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"

/* Frees a block allocated by `malloc`, `realloc` or `calloc` and
   establishes the pointer to NULL.
   This function is protected against dangling pointers.  */
void	ft_free(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
	}
}
