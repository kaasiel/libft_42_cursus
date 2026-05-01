/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belaindr <belaindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 10:46:51 by belaindr          #+#    #+#             */
/*   Updated: 2026/02/10 12:48:25 by belaindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	deb;
	size_t	end;
	char	*res;

	deb = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[deb] && ft_strchr(set, s1[deb]))
		deb++;
	end = ft_strlen(s1);
	while (end > deb && ft_strchr(set, s1[end - 1]))
		end--;
	res = ft_substr(s1, deb, (end - deb));
	return (res);
}
