/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belaindr <belaindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 09:47:20 by belaindr          #+#    #+#             */
/*   Updated: 2026/02/10 12:48:06 by belaindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	total_size;
	size_t	i;
	size_t	j;

	total_size = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(sizeof(s1[0]) * total_size + 1);
	i = 0;
	j = 0;
	if (!res)
		return (NULL);
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		res[i + j] = s2[j];
		j++;
	}
	res [i + j] = '\0';
	return (res);
}
