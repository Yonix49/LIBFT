/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:20:31 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/25 06:51:45 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*i;

	i = s;
	while (n > 0)
	{
		*i = c;
		i++;
		n--;
	}
	return (s);
}

// int main ()
// {
// 	char s [] = "i";
// 	int c = 55;
// 	size_t n = 6;
// 	printf("%s\n", (char*)ft_memset(s, c, n));
// 	printf("%s\n", (char*)memset(s, c, n));

// }
