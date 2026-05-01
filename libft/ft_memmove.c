/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belaindr <belaindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:10:09 by belaindr          #+#    #+#             */
/*   Updated: 2026/02/10 15:07:46 by belaindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!(d || s))
		return (NULL);
	if (d < s)
	{
		while (n--)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	else if (d > s)
	{
		while (n--)
			d[n] = s[n];
		return (d);
	}
	return (dest);
}
