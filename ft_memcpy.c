/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:48:30 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/25 06:51:56 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*i;

	i = (char *)dest;
	d = (char *)src;
	while (n > 0)
	{
		*i = *d;
		i++;
		d++;
		n--;
	}
	return (dest);
}

// int main ()
// {
// 	char src [] = "";
// 	char dest [] = "fwefwef fqqqqq";	
// 	size_t n = 6;
// 	printf("%s\n", (char*)ft_memcpy(dest, src, n));
// 	printf("%s\n", (char*)memcpy(dest, src, n));

// }