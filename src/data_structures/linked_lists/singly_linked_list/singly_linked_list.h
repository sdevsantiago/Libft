/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   singly_linked_list.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 18:41:25 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/02 21:32:13 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SINGLY_LINKED_LIST_H
# define SINGLY_LINKED_LIST_H

# include <stddef.h>	// NULL
# include <stdlib.h>	// malloc(3), free(3)

/******************************************************************************/
/*                           Structures & Data Types                          */
/******************************************************************************/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/******************************************************************************/
/*                                 Functions                                  */
/******************************************************************************/

extern t_list	*ft_lstlast(t_list *lst);

extern t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

extern t_list	*ft_lstnew(void *content);

extern void		ft_lstadd_back(t_list **lst, t_list *new);

extern void		ft_lstadd_front(t_list **lst, t_list *new);

extern void		ft_lstclear(t_list **lst, void (*del)(void *));

extern void		ft_lstdelone(t_list *lst, void (*del)(void *));

extern void		ft_lstiter(t_list *lst, void (*f)(void *));

extern int		ft_lstsize(t_list *lst);

#endif /* SINGLY_LINKED_LIST_H */
