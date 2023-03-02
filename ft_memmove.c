/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:43:57 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/19 11:00:54 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (src < dst)
	{
		while (n > 0)
		{
			((char *)dst)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}

// int main ()
// {
// 	char src [] = "Allez la kcorp";
// 	char dest [] = "Bonjour je suis";	
// 	size_t n = 10;
// 	printf("%s\n", (char*)ft_memmove(dest, src, n));
// 	printf("%s\n", (char*)memmove(dest, src, n));
// }