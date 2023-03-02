/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:52:46 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/25 06:51:02 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"libft.h"

static void	ft_colle(char *dest, char *ss1, char *ss2)
{
	size_t		i;
	size_t		p;

	i = 0;
	p = 0;
	while (i < ft_strlen(ss1))
	{
		dest[i] = ss1[i];
		i++;
	}
	while (p + i < (ft_strlen(ss1) + ft_strlen(ss2)))
	{
		dest[p + i] = ss2[p];
		p++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ss1;
	char	*ss2;
	char	*dest;

	if (!s1 || !s2)
		return (NULL);
	ss1 = (char *)s1;
	ss2 = (char *)s2;
	dest = (char *)malloc(ft_strlen(ss1) + ft_strlen(ss2) + 1);
	if (!dest)
		return (NULL);
	if ((ft_strlen(ss1) + ft_strlen(ss2)) == 0)
	{
		dest[0] = 0;
		return (dest);
	}
	dest [(ft_strlen(ss1)+ ft_strlen(ss2))] = '\0';
	ft_colle (dest, ss1, ss2);
	return (dest);
}

// int main ()
// {
// 	char const s1 [] = "";
// 	char const s2 [] = "";
// 	char *s3 = ft_strjoin(s1, s2);
// 	printf("%s\n", s3);
// 	free(s3);
// 	return (0);
// }