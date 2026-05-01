/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belaindr <belaindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:29:15 by belaindr          #+#    #+#             */
/*   Updated: 2026/01/29 14:24:07 by belaindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	final_len;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dst);
	final_len = ft_strlen(dst);
	if (size <= final_len)
	{
		final_len = size + ft_strlen(src);
		return (final_len);
	}
	while (src[i] != '\0' && j < (size - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	final_len = final_len + ft_strlen(src);
	return (final_len);
}
