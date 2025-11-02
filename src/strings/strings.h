/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 19:58:42 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 21:37:04 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGS_H
# define STRINGS_H

# include "checks.h"	// ft_isdigit()
# include <stdarg.h>	// va_list, va_start(3), va_arg(3), va_end(3)
# include <stddef.h>	// size_t, NULL
# include <stdlib.h>	// malloc(3), free(3)

/******************************************************************************/
/*                                 Functions                                  */
/******************************************************************************/

extern char		**ft_nsplit(size_t l, const char *s, char c);

extern char		**ft_split(const char *s, char c);

extern char		*ft_strchr(const char *s, int c);

extern int		ft_strcmp(const char *s1, const char *s2);

extern char		*ft_strdup(const char *s);

extern int		ft_strisnum(const char *str);

extern void		ft_striteri(char *s, void (*f)(unsigned int, char*));

extern char		*ft_strjoin(const char *s1, const char *s2);

extern size_t	ft_strlcat(char *dst, const char *src, size_t size);

extern size_t	ft_strlcpy(char *dst, const char *src, size_t size);

extern size_t	ft_strlen(const char *s);

extern char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

extern int		ft_strncmp(const char *s1, const char *s2, size_t n);

extern char		*ft_strncpy(char *dest, const char *src, size_t n);

extern char		*ft_strnjoin(int count, ...);

extern char		*ft_strnstr(const char *big, const char *little, size_t len);

extern char		*ft_strrchr(const char *s, int c);

extern char		*ft_strtrim(const char *s1, const char *set);

extern char		*ft_substr(const char *s, unsigned int start, size_t len);

#endif /* STRINGS_H */
