/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:11:11 by sede-san          #+#    #+#             */
/*   Updated: 2025/04/24 20:43:21 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Prints the error message indicated with `err_num` in `STDERR`.
 *
 * @see errors.h
 */
void	ft_puterror(t_errors err_num)
{
	ft_putstr_fd(RED_TEXT, STDERR_FILENO);
	ft_putendl_fd(ft_geterror(err_num), STDERR_FILENO);
	ft_putstr_fd(RESET, STDERR_FILENO);
}
