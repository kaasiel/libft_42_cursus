/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belaindr <belaindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:06:11 by belaindr          #+#    #+#             */
/*   Updated: 2026/02/07 14:57:25 by belaindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*res;

	if (!(*list == NULL) && new)
	{
		res = ft_lstlast(*list);
		res->next = new;
	}
	else
		*list = new;
}
