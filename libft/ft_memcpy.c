/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belaindr <belaindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 10:29:46 by belaindr          #+#    #+#             */
/*   Updated: 2026/02/10 15:07:38 by belaindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*q;

	if (dest == NULL && src == NULL)
		return (NULL);
	p = (unsigned char *)dest;
	q = (unsigned char *)src;
	while (n--)
	{
		*p = *q;
		p++;
		q++;
	}
	return (dest);
}
