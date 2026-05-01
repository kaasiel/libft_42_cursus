/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belaindr <belaindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:46:36 by belaindr          #+#    #+#             */
/*   Updated: 2026/02/10 12:46:47 by belaindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	size_t	i;

	p = (char *)s;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (p + i);
		i++;
	}
	if ((char)c == '\0')
		return (p + i);
	return (NULL);
}
