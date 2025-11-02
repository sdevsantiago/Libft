/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 19:47:16 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 21:35:32 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# include "strings.h"	// ft_strlen()
# include <unistd.h>	// write(2), STDIN_FILENO, STDOUT_FILENO, STDERR_FILENO
# include <limits.h>	// INT_MIN

/******************************************************************************/
/*                                 Functions                                  */
/******************************************************************************/

extern void	ft_eputchar(char c);

extern void	ft_eputendl(char *s);

extern void	ft_eputnbr(int n);

extern void	ft_eputstr(char *s);

extern void	ft_putchar_fd(char c, int fd);

extern void	ft_putchar(char c);

extern void	ft_putendl_fd(char *s, int fd);

extern void	ft_putendl(char *s);

extern void	ft_putnbr_fd(int n, int fd);

extern void	ft_putnbr(int n);

extern void	ft_putstr_fd(char *s, int fd);

extern void	ft_putstr_fd(char *s, int fd);

#endif /* PRINT_H */
