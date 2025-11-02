/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_linked_list.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 18:40:54 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 20:38:09 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOUBLY_LINKED_LIST_H
# define DOUBLY_LINKED_LIST_H

# include <stddef.h>	// NULL
# include <stdlib.h>	// malloc(3), free(3)

/******************************************************************************/
/*                           Structures & Data Types                          */
/******************************************************************************/

typedef struct s_dlist
{
	void			*content;
	struct s_dlist	*next;
	struct s_dlist	*previous;
}	t_dlist;

/******************************************************************************/
/*                                 Functions                                  */
/******************************************************************************/

extern t_dlist	*ft_dlstlast(t_dlist *lst);

extern t_dlist	*ft_dlstmap(t_dlist *lst, void *(*f)(void *),
					void (*del)(void *));

extern t_dlist	*ft_dlstnew(void *content);

extern void		ft_dlstadd_back(t_dlist **lst, t_dlist *new);

extern void		ft_dlstadd_front(t_dlist **lst, t_dlist *new);

extern void		ft_dlstclear(t_dlist **lst, void (*del)(void *));

extern void		ft_dlstdelone(t_dlist *dst, void (*del)(void *));

extern void		ft_dlstiter(t_dlist *lst, void (*f)(void *));

extern int		ft_dlstsize(t_dlist *lst);

#endif /* DOUBLY_LINKED_LIST_H */
