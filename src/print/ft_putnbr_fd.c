/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:21:59 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 19:53:30 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

/* Prints the number N in the FD given.  */
void	ft_putnbr_fd(int n, int fd)
{
	unsigned char	digit;

	if (n == INT_MIN)
		ft_putstr_fd("-2147483648", fd);
	else if (n == 0)
		ft_putstr_fd("0", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else
	{
		digit = n % 10 + '0';
		n /= 10;
		if (n > 0)
			ft_putnbr_fd(n, fd);
		ft_putchar_fd(digit, fd);
	}
}
