/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:42:09 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/03 02:08:19 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* Checks if the passed character is uppercase.  */
int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
