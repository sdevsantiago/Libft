/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circular_singly_linked_list.h                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 18:40:06 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 20:36:36 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CIRCULAR_SINGLY_LINKED_LIST_H
# define CIRCULAR_SINGLY_LINKED_LIST_H

# include <stddef.h>	// NULL
# include <stdlib.h>	// malloc(3), free(3)

/******************************************************************************/
/*                           Structures & Data Types                          */
/******************************************************************************/

typedef struct s_clist
{
	void			*content;
	struct s_clist	*next;
}	t_clist;

/******************************************************************************/
/*                                 Functions                                  */
/******************************************************************************/

extern t_clist	*ft_clstlast(t_clist *lst);

extern t_clist	*ft_clstmap(t_clist *lst, void *(*f)(void *),
					void (*del)(void *));

extern t_clist	*ft_clstnew(void *content);

extern void		ft_clstadd_back(t_clist **lst, t_clist *new);

extern void		ft_clstadd_front(t_clist **lst, t_clist *new);

extern void		ft_clstclear(t_clist **lst, void (*del)(void *));

extern void		ft_clstdelone(t_clist *lst, void (*del)(void *));

extern void		ft_clstiter(t_clist *lst, void (*f)(void *));

extern int		ft_clstsize(t_clist *lst);

#endif /* CIRCULAR_SINGLY_LINKED_LIST_H */
