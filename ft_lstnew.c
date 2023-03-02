/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:54:17 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/22 18:19:03 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc (sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int main (void)
// {
//     t_list    *node;
//     char *a;
//     a = "salufwefwefweft";
//     node = ft_lstnew (a);
//     printf ("%s", ((char *)node->content));
// }