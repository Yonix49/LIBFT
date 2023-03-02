/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 00:01:43 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/25 06:50:37 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"libft.h"

static	size_t	ft_verification(int start, size_t len, char const *s)
{
	size_t	x;

	if ((size_t)(start + len) > ft_strlen(s))
		x = ft_strlen(s) - start + 1;
	else
		x = len + 1;
	return (x);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss1;
	size_t	i;
	size_t	x;

	if (!s)
		return (NULL);
	i = 0;
	x = ft_verification(start, len, s);
	if (s && start >= ft_strlen(s))
	{
		ss1 = malloc(sizeof(char));
		ss1[0] = '\0';
		return (ss1);
	}
	ss1 = malloc(sizeof(char) * (x));
	if (!ss1)
		return (NULL);
	while (i < len && (char)s[i + start])
	{
		ss1 [i] = (char)s[i + start];
		i++;
	}
	ss1[i] = '\0';
	return (ss1);
}

// int main ()
// {
// 	char const s [] = "0123456789";
// 	printf("%s\n", ft_substr(s, 9, 10));
// }