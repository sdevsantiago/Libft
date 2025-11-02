/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circular_doubly_linked_list.h                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 18:39:17 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 20:32:59 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CIRCULAR_DOUBLY_LINKED_LIST_H
# define CIRCULAR_DOUBLY_LINKED_LIST_H

# include <stddef.h>	// NULL
# include <stdlib.h>	// malloc(3), free(3)

/******************************************************************************/
/*                           Structures & Data Types                          */
/******************************************************************************/

typedef struct s_cdlist
{
	void			*content;
	struct s_cdlist	*next;
	struct s_cdlist	*previous;
}	t_cdlist;

/******************************************************************************/
/*                                 Functions                                  */
/******************************************************************************/

extern t_cdlist	*ft_cdlstlast(t_cdlist *lst);

extern t_cdlist	*ft_cdlstmap(t_cdlist *lst, void *(*f)(void *),
					void (*del)(void *));

extern t_cdlist	*ft_cdlstnew(void *content);

extern void		ft_cdlstadd_back(t_cdlist **lst, t_cdlist *new);

extern void		ft_cdlstadd_front(t_cdlist **lst, t_cdlist *new);

extern void		ft_cdlstclear(t_cdlist **lst, void (*del)(void *));

extern void		ft_cdlstdelone(t_cdlist *lst, void (*del)(void *));

extern void		ft_cdlstiter(t_cdlist *lst, void (*f)(void *));

extern int		ft_cdlstsize(t_cdlist *lst);

#endif /* CIRCULAR_DOUBLY_LINKED_LIST_H */
