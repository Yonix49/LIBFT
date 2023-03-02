/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:32:17 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/19 10:50:37 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// char ft_tolozer(unsigned int i, char a)
// {
// 	if ((unsigned int )a < i)
// 	{
// 		return ('c');
// 	}
// 	return('s');
// }
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*ss;

	ss = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ss)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ss[i] = s[i];
		i++;
	}
	ss[i] = '\0';
	i = 0;
	while (ss[i])
	{
		ss[i] = (*f)(i, ss[i]);
		i++;
	}
	return (ss);
}

// int main ()
// {
// 	char const s [] = "Salut les amis";
// 	char	(*f)(unsigned int, char);
// 	f = &ft_tolozer;
// 	printf("%s\n", ft_strmapi(s, f));
// }