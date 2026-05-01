/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belaindr <belaindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 10:40:11 by belaindr          #+#    #+#             */
/*   Updated: 2026/02/07 18:25:55 by belaindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *src, char c)
{
	size_t	i;
	size_t	nb_word;
	size_t	test;

	i = 0;
	nb_word = 0;
	test = 1;
	while (src[i])
	{
		if (src[i] != c && test == 1)
		{
			nb_word++;
			test = 0;
		}
		if (src[i] == c)
		{
			test = 1;
		}
		i++;
	}
	return (nb_word);
}

static char	**ft_free(char **src, int i)
{
	while (i >= 0)
	{
		free(src[i]);
		i--;
	}
	free(src);
	return (NULL);
}

static char	**ft_true_split(char const *src, char **dest, char c)
{
	int	i;
	int	j;
	int	nb_word;

	i = -1;
	nb_word = ft_count(src, c);
	while (++ i < nb_word)
	{
		while (*src == c)
			src++;
		j = 0;
		while (src[j] != c && src[j])
			j++;
		dest[i] = ft_substr(src, 0, j);
		if (!dest[i])
		{
			ft_free(dest, i - 1);
			return (NULL);
		}
		src = src + j;
	}
	dest[i] = NULL;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (s == NULL)
		return (NULL);
	res = ft_calloc(ft_count(s, c) + 1, sizeof(char *));
	if (res == NULL)
		return (NULL);
	if (ft_true_split(s, res, c) == NULL)
		return (NULL);
	return (res);
}
