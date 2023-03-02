/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:52:08 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/22 18:16:58 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!*lst || !new)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp && (tmp)->next != NULL)
	{
		tmp = (tmp)->next;
	}
	(tmp)->next = new;
}
