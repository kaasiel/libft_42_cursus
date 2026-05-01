/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belaindr <belaindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:51:17 by belaindr          #+#    #+#             */
/*   Updated: 2026/02/07 14:58:55 by belaindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*res;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		res = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = res;
	}
	free(*lst);
	*lst = NULL;
}
