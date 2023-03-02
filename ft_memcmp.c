/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:39:04 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/25 06:52:01 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*i;
	const unsigned char	*d;
	int					x;

	x = 0;
	i = s1;
	d = s2;
	if (n == 0)
		return (0);
	while (i[x] == d[x] && n - 1 > 0)
	{
		n--;
		i++;
		d++;
	}
	return (i[x] - d[x]);
}

// int main ()
// {
// 	const char s1 [] = "";
// 	const char s2 [] = "fwefwef fqqqqq";
// 	size_t n = 6;
// 	printf("%i\n", ft_memcmp(s1, s2, n));
// 	printf("%i\n", memcmp(s1, s2, n));

// }