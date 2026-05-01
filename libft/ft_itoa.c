/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belaindr <belaindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 11:48:08 by belaindr          #+#    #+#             */
/*   Updated: 2026/02/07 14:55:14 by belaindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int n)
{
	long	nb;
	long	lnb;

	lnb = 0;
	nb = n;
	if (n == 0)
		return (1);
	if (nb < 0)
	{
		lnb++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		lnb++;
	}
	return (lnb);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	lnb;
	long	numb;

	lnb = ft_count(n);
	res = ft_calloc(lnb + 1, sizeof(char));
	numb = n;
	if (!res)
		return (NULL);
	if (numb < 0)
		numb = -numb;
	if (numb == 0)
	{
		res[0] = '0';
		return (res);
	}
	while (numb > 0)
	{
		res[--lnb] = (numb % 10) + '0';
		numb /= 10;
	}
	if (n < 0)
		res [0] = '-';
	return (res);
}
