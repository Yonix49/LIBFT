/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:10:26 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/22 18:17:42 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*s;

	if (!lst || !f || !del)
		return (0);
	tmp = ft_lstnew(f(lst->content));
	if (!tmp)
		return (0);
	s = tmp;
	lst = lst->next;
	while (lst)
	{
		tmp->next = ft_lstnew(f(lst->content));
		if (!tmp->next)
		{
			ft_lstclear(&s, del);
			return (0);
		}
		tmp = tmp->next;
		lst = lst->next;
	}
	tmp->next = NULL;
	return (s);
}
