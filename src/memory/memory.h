/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 19:38:47 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/03 02:00:26 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H

# include "../strings/strings.h"	// ft_strlen()
# include <stddef.h>				// size_t, NULL
# include <stdlib.h>				// malloc(3), free(3)

/******************************************************************************/
/*                                 Functions                                  */
/******************************************************************************/

extern void	ft_bzero(void *s, size_t n);

extern void	*ft_calloc(size_t nmemb, size_t size);

extern void	ft_free_split(char **splitted);

extern void	ft_free(void **ptr);

extern void	*ft_memchr(const void *s, int c, size_t n);

extern int	ft_memcmp(const void *s1, const void *s2, size_t n);

extern void	*ft_memcpy(void *dest, const void *src, size_t n);

extern void	*ft_memmove(void *dest, const void *src, size_t n);

extern void	*ft_memset(void *s, int c, size_t n);

extern void	*ft_realloc(void *ptr, size_t size);

extern void	ft_swap(void *a, void *b);

#endif /* MEMORY_H */
