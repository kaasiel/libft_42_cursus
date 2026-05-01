/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belaindr <belaindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 14:30:59 by belaindr          #+#    #+#             */
/*   Updated: 2026/02/10 15:03:27 by belaindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*res;
	size_t	size;
	size_t	i;

	size = ft_strlen(src);
	res = ft_calloc(size + 1, sizeof(src[0]));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		res[i] = src[i];
		i++;
	}
	return (res);
}
