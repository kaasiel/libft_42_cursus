/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belaindr <belaindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 08:27:15 by belaindr          #+#    #+#             */
/*   Updated: 2026/02/10 15:07:27 by belaindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	test;
	unsigned int	i;

	p = (unsigned char *)s;
	i = 0;
	test = c;
	while (i != n)
	{
		if (p[i] == test)
			return (p + i);
		i++;
	}
	return (NULL);
}
