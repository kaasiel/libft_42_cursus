/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belaindr <belaindr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 18:15:17 by belaindr          #+#    #+#             */
/*   Updated: 2026/02/07 14:59:34 by belaindr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cible;
	t_list	*res;

	res = NULL;
	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	while (lst)
	{
		cible = ft_lstnew(f(lst->content));
		if (!cible)
		{
			ft_lstclear(&cible, del);
			return (NULL);
		}
		ft_lstadd_back(&res, cible);
		lst = lst->next;
	}
	return (res);
}
