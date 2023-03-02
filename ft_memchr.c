/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:32:32 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/20 12:49:15 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*i;

	i = (unsigned char *)s;
	if (n <= 0)
		return (NULL);
	while (n > 0)
	{
		if (*i == (unsigned char)c)
			return (i);
		n--;
		i++;
	}
	return (NULL);
}

// int main ()
// {
// 	const char s1 []= {0, 1, 2 ,3 ,4 ,5};
// 	// const char s2 [] = "fwefwef fqqqqq";
// 	int c = 52;
// 	size_t n = 5;
// 	printf("%s\n",(char *)ft_memchr((void *)s1, 2 + 256, n));
// 	printf("%s\n",(char *)memchr((void *)s1, 2 + 256, n));
// }