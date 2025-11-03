/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 19:09:15 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/03 01:59:15 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONS_H
# define CONVERSIONS_H

# include "../checks/checks.h"		// ft_isspace()
# include "../strings/strings.h"	// ft_strlen(), ft_strchr()
# include <limits.h>				// INT_MIN, LONG_MIN
# include <stddef.h>				// size_t, NULL
# include <stdlib.h>				// malloc(3)

# define BIN_BASE "01"
# define OCT_BASE "01234567"
# define DEC_BASE "0123456789"
# define HEX_BASE "0123456789ABCDEF"

/******************************************************************************/
/*                                 Functions                                  */
/******************************************************************************/

extern int	ft_atoi_base(const char *str, const char *base);

extern int	ft_atoi(const char *str);

extern long	ft_atol(const char *str);

extern char	*ft_itoa_base(int n, const char *base);

extern char	*ft_itoa(int n);

extern char	*ft_ltoa(long n);

extern int	ft_tolower(int c);

extern int	ft_toupper(int c);

extern char	*ft_uitoa_base(unsigned int n, const char *base);

extern char	*ft_uitoa(unsigned int n);

extern char	*ft_ultoa_base(unsigned long n, const char *base);

#endif /* CONVERSIONS_H */
