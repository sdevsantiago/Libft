/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:40:58 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/30 03:58:04 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# ifdef __unix__
#  include <linux/limits.h>
# endif
# include <unistd.h>
# include "colors.h"

/* **************************** Part 1 functions **************************** */

extern void			ft_bzero(void *s, size_t n);
extern void			*ft_calloc(size_t nmemb, size_t size);
extern void			*ft_memchr(const void *s, int c, size_t n);
extern void			*ft_memcpy(void *dest, const void *src, size_t n);
extern void			*ft_memmove(void *dest, const void *src, size_t n);
extern void			*ft_memset(void *s, int c, size_t n);
extern int			ft_atoi(const char *str);
extern int			ft_isalnum(int c);
extern int			ft_isalpha(int c);
extern int			ft_isascii(int c);
extern int			ft_isdigit(int c);
extern int			ft_isprint(int c);
extern int			ft_memcmp(const void *s1, const void *s2, size_t n);
extern int			ft_strncmp(const char *s1, const char *s2, size_t n);
extern int			ft_tolower(int c);
extern int			ft_toupper(int c);
extern size_t		ft_strlcat(char *dst, const char *src, size_t size);
extern size_t		ft_strlcpy(char *dst, const char *src, size_t size);
extern size_t		ft_strlen(const char *s);
extern char			*ft_strchr(const char *s, int c);
extern char			*ft_strdup(const char *s);
extern char			*ft_strnstr(const char *big, const char *little,
						size_t len);
extern char			*ft_strrchr(const char *s, int c);

/* **************************** Part 2 functions **************************** */

extern void			ft_putchar_fd(char c, int fd);
extern void			ft_putendl_fd(char *s, int fd);
extern void			ft_putnbr_fd(int n, int fd);
extern void			ft_putstr_fd(char *s, int fd);
extern void			ft_striteri(char *s, void (*f)(unsigned int, char*));
extern char			*ft_itoa(int n);
extern char			*ft_strjoin(const char *s1, const char *s2);
extern char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
extern char			*ft_strtrim(char const *s1, char const *set);
extern char			*ft_substr(const char *s, unsigned int start, size_t len);
extern char			**ft_split(const char *s, char c);

/* ***************************** Bonus functions **************************** */

// Single linked list structure
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

extern t_list		*ft_lstlast(t_list *lst);
extern t_list		*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
extern t_list		*ft_lstnew(void *content);
extern void			ft_lstadd_back(t_list **lst, t_list *new);
extern void			ft_lstadd_front(t_list **lst, t_list *new);
extern void			ft_lstclear(t_list **lst, void (*del)(void *));
extern void			ft_lstclear_nodes(t_list **lst);
extern void			ft_lstdelone(t_list *lst, void (*del)(void *));
extern void			ft_lstiter(t_list *lst, void (*f)(void *));
extern int			ft_lstsize(t_list *lst);

/* *************************** Aditional functions ************************** */

# define BIN_BASE "01"
# define OCT_BASE "01234567"
# define DEC_BASE "0123456789"
# define HEX_BASE "0123456789ABCDEF"

extern void			ft_eputchar(char c);
extern void			ft_eputendl(char *s);
extern void			ft_eputstr(char *s);
extern void			ft_eputnbr(int n);
extern void			ft_free(void **ptr);
extern void			ft_free_split(char **splitted);
extern void			ft_putchar(char c);
extern void			ft_putendl(char *s);
extern void			ft_putnbr(int n);
extern void			ft_putstr(char *s);
extern void			ft_swap(void *a, void *b);
extern void			*ft_realloc(void *ptr, size_t size);
extern int			ft_atoi_base(const char *str, const char *base);
extern int			ft_hashstr(const char *str);
extern int			ft_iabs(int n);
extern int			ft_imin(int a, int b);
extern int			ft_iscntrl(int c);
extern int			ft_islower(int c);
extern int			ft_isspace(int c);
extern int			ft_isupper(int c);
extern int			ft_strcmp(const char *s1, const char *s2);
extern int			ft_strisnum(const char *str);
extern long			ft_atol(const char *str);
extern double		ft_pow(double base, double exponent);
extern char			*ft_itoa_base(int n, const char *base);
extern char			*ft_ltoa(long n);
extern char			*ft_strncpy(char *dest, const char *src, size_t n);
extern char			*ft_strnjoin(int count, ...);
extern char			*ft_uitoa(unsigned int n);
extern char			*ft_uitoa_base(unsigned int n, const char *base);
extern char			*ft_ultoa_base(unsigned long n, const char *base);
extern char			**ft_nsplit(size_t l, const char *s, char c);

// Doubly linked list
typedef struct s_dlist
{
	void			*content;
	struct s_dlist	*next;
	struct s_dlist	*previous;
}	t_dlist;

extern t_dlist		*ft_dlstlast(t_dlist *lst);
extern t_dlist		*ft_dlstmap(t_dlist *lst, void *(*f)(void *),
						void (*del)(void *));
extern t_dlist		*ft_dlstnew(void *content);
extern void			ft_dlstadd_back(t_dlist **lst, t_dlist *new);
extern void			ft_dlstadd_front(t_dlist **lst, t_dlist *new);
extern void			ft_dlstclear(t_dlist **lst, void (*del)(void *));
extern void			ft_dlstdelone(t_dlist *dst, void (*del)(void *));
extern void			ft_dlstiter(t_dlist *lst, void (*f)(void *));
extern int			ft_dlstsize(t_dlist *lst);

// Circular single linked list structure
typedef struct s_clist
{
	void			*content;
	struct s_clist	*next;
}	t_clist;

extern t_clist		*ft_clstlast(t_clist *lst);
extern t_clist		*ft_clstmap(t_clist *lst, void *(*f)(void *),
						void (*del)(void *));
extern t_clist		*ft_clstnew(void *content);
extern void			ft_clstadd_back(t_clist **lst, t_clist *new);
extern void			ft_clstadd_front(t_clist **lst, t_clist *new);
extern void			ft_clstclear(t_clist **lst, void (*del)(void *));
extern void			ft_clstdelone(t_clist *lst, void (*del)(void *));
extern void			ft_clstiter(t_clist *lst, void (*f)(void *));
extern int			ft_clstsize(t_clist *lst);

// Circular doubly linked list structure
typedef struct s_cdlist
{
	void			*content;
	struct s_cdlist	*next;
	struct s_cdlist	*previous;
}	t_cdlist;

extern t_cdlist		*ft_cdlstlast(t_cdlist *lst);
extern t_cdlist		*ft_cdlstmap(t_cdlist *lst, void *(*f)(void *),
						void (*del)(void *));
extern t_cdlist		*ft_cdlstnew(void *content);
extern void			ft_cdlstadd_back(t_cdlist **lst, t_cdlist *new);
extern void			ft_cdlstadd_front(t_cdlist **lst, t_cdlist *new);
extern void			ft_cdlstclear(t_cdlist **lst, void (*del)(void *));
extern void			ft_cdlstdelone(t_cdlist *lst, void (*del)(void *));
extern void			ft_cdlstiter(t_cdlist *lst, void (*f)(void *));
extern int			ft_cdlstsize(t_cdlist *lst);

/**
 * @struct MapEntry
 * @brief Key-value pair structure for hash map entries.
 */
typedef struct s_map_entry
{
	const void	*key;	// entry identifier
	void		*value;	// entry data
}	t_map_entry;

typedef int	(*t_hash_func)(const void *key);
typedef int	(*t_comp_func)(const void *p1, const void *p2);

/**
 * @struct HashMap
 * @brief Hash map data structure for storing key-value pairs.
 */
typedef struct s_hashmap
{
	t_list		**buckets;	// array of bucket lists for storing key-value pairs
	size_t		size;		// number of entries
	size_t		capacity;	// number of buckets
	t_hash_func	hash_func;	// function to compute hash values for keys
	t_comp_func	comp_func;	// function to compare values in buckets
	/**
	 * TODO: For future implementation
	 * These fields can be added to improve performance
	 *
	 * float load_factor; // percentage of entries before resizing
	 */
}	t_hashmap;

extern t_hashmap	*ft_hashmap_new(size_t initial_capacity,
						t_hash_func hash_func, t_comp_func comp_func);
extern void			ft_hashmap_clear(t_hashmap **hashmap, void (*del)(void *));
extern void			*ft_hashmap_get(t_hashmap *hashmap, const void *key);
extern void			*ft_hashmap_put(t_hashmap *hashmap, const void *key,
						void *new_value);
extern void			*ft_hashmap_remove(t_hashmap *hashmap, void *key);
extern int			ft_hashmap_contains_key(t_hashmap *hashmap,
						const void *key);
extern int			ft_hashmap_hashstr(const void *str);
extern int			ft_hashmap_strcmp(const void *s1, const void *s2);
extern t_list		*ft_hashmap_entries(t_hashmap *hashmap);

#endif
