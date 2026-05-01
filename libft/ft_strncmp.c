/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belaindr <belaindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 08:06:55 by belaindr          #+#    #+#             */
/*   Updated: 2026/02/10 12:46:26 by belaindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*val1;
	char	*val2;
	int		result;
	size_t	i;

	val1 = (char *)s1;
	val2 = (char *)s2;
	i = 0;
	while (i != n && (val1[i] != '\0' || val2[i] != '\0'))
	{
		if (!(val1 [i] == val2[i]))
		{
			result = (unsigned char)val1[i] - (unsigned char)val2[i];
			return (result);
		}
		i++;
	}
	return (0);
}
