/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:22:28 by sede-san          #+#    #+#             */
/*   Updated: 2025/04/29 17:23:22 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORS_H
# define ERRORS_H

# define NO_ERRORS_MESSAGE ""
# define ERROR_ARGS_MESSAGE "ERROR: Not enough arguments"

typedef enum e_errors
{
	NO_ERROR = 0,
	ERROR_ARGS = 1
}			t_errors;

static inline char	*ft_geterror(t_errors error_code)
{
	char	*error;

	if (error_code == ERROR_ARGS)
		error = ERROR_ARGS_MESSAGE;
	else
		error = NO_ERRORS_MESSAGE;
	return (error);
}

#endif
