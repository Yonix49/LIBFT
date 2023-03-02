/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:06:55 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/19 15:36:19 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (s1[i] || s2[i]) && i < n - 1)
	{
		i++;
	}
	if (s1[i] - s2[i] < -127)
		return (-(s1[i] - s2[i]));
	return (s1[i] - s2[i]);
}

// int main ()
// {
// 	size_t n = 6;
// 	const char s1 [] = "test\200";
// 	const char s2 [] = "test\0";
// 	printf("Le mien   %d\n",(ft_strncmp(s1, s2 ,n)));
// 	printf("Leur test  %d\n",(strncmp(s1, s2 ,n))); 
// }