/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:31:59 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/20 14:40:10 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i > 0)
	{
		if ((unsigned char) s[i] == (unsigned char) c)
			return ((char *)s + i);
		i--;
	}
	if ((unsigned char) s[i] == (unsigned char) c)
		return ((char *)s + i);
	return (NULL);
}

// int main ()
// {
// 	const char s [] = "tripouille";
// 	printf("%s\n", ft_strrchr(s, 't'));
// 	printf("%s\n", strrchr(s, 't'));
// 	printf("%s\n", ft_strrchr(s, 'l' ));
// 	printf("%s\n", strrchr(s, 'l' ));
// 	printf("%s\n", ft_strrchr(s, 't' + 256));
// 	printf("%s\n", strrchr(s, 't' + 256));
// 	return (0);
// }