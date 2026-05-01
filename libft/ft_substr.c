/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belaindr <belaindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 09:33:58 by belaindr          #+#    #+#             */
/*   Updated: 2026/02/10 15:04:33 by belaindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	verif;

	if (!s)
		return (NULL);
	verif = ft_strlen(s);
	if (verif <= start)
	{
		res = ft_strdup("");
		return (res);
	}
	if (len > verif - start)
		len = verif - start;
	res = malloc(sizeof(s[0]) * (len + 1));
	if (!res)
	{
		return (NULL);
	}
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
