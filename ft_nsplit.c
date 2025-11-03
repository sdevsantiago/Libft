/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nsplit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 12:48:29 by sede-san          #+#    #+#             */
/*   Updated: 2025/10/01 14:04:24 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(size_t l, const char *s, char c);
static size_t	count_word_len(size_t l, const char *s, char c);
static void		free_matrix(void **matrix);

char	**ft_nsplit(
	size_t l,
	const char *s,
	char c)
{
	char	**s_split;
	size_t	row;
	size_t	len;

	if (!s || !l)
		return (NULL);
	s_split = (char **)malloc((count_words(l, s, c) + 1) * sizeof(char *));
	if (!s_split)
		return (NULL);
	row = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		len = count_word_len(l, s, c);
		l--;
		if (len)
			s_split[row] = ft_substr(s, 0, len);
		if (len && !s_split[row++])
			return (free_matrix((void **)s_split), NULL);
		s += len;
	}
	s_split[row] = NULL;
	return (s_split);
}

static size_t	count_words(
	size_t l,
	const char *s,
	char c)
{
	size_t	words;

	if (!s)
		return (0);
	words = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			words++;
		if (words == l)
			break ;
		while (*s != c && *s)
			s++;
	}
	return (words);
}

static size_t	count_word_len(
	size_t l,
	const char *s,
	char c)
{
	size_t	i;

	if (!(l - 1))
		return (ft_strlen(s));
	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static void	free_matrix(
	void **matrix)
{
	size_t	row;

	row = 0;
	while (matrix[row])
	{
		free(matrix[row]);
		row++;
	}
	free(matrix);
}
