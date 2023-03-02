/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:54:01 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/12 01:39:58 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*i;

	i = s;
	while (n > 0)
	{
		*i = 0;
		i++;
		n--;
	}
}

// int main ()
// {
// 	size_t n = 4;
// 	char s [] = "alo";
// 	printf("%d\n", ft_bzero(s,  n));
// 	printf("%d\n", bzero(s,  n));
// }