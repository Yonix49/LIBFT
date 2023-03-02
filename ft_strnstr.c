/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:13:50 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/20 14:41:09 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int				i;
	unsigned int	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)(big));
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i + j] && little[j]
			&& big[i + j] == little[j] && i + j < len)
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return ((char *)(&big[i]));
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main(void)
// {
//     char    big[] = "lorem ipsum dolor sit amet";
//     char    little[] = "dolor";
//     size_t len = 0;
//     printf("Valeur retournee est %s\n", ft_strnstr(big, little, len));
// }