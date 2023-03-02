/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:06:47 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/14 08:05:49 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<string.h>
#include<stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

// int main ()
// {
// 	char dst [] = "Bonjoufwfwfwfwwwwwwwwwwwwwwwwwr";
// 	const char src [] = "Zyzz never ff";
// 	size_t size = 8;
// 	printf("%i\n", size_t(ft_strlcpy(dst, src , size));
// 	printf("%i\n", size_t(strlcpy(dst, src , size));
// }