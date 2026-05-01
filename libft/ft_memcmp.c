/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belaindr <belaindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 09:20:25 by belaindr          #+#    #+#             */
/*   Updated: 2026/02/10 15:07:33 by belaindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*val1;
	unsigned char	*val2;
	unsigned int	i;

	val1 = (unsigned char *)s1;
	val2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i != n)
	{
		if (val1[i] != val2[i])
			return (val1[i] - val2[i]);
		i++;
	}
	return (0);
}
