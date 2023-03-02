/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:47:46 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/24 14:39:53 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		lendest;
	size_t		i;
	size_t		d;

	d = ft_strlen(dst);
	i = 0;
	lendest = ft_strlen(dst);
	if (size == 0)
		return (ft_strlen(src));
	if (size < lendest)
		return (size + ft_strlen(src));
	if (size > lendest)
	{
		while (src[i] && size - lendest > 1)
		{
			dst[lendest] = src[i];
			i++;
			lendest++;
		}
	}
	dst[lendest] = '\0';
	while (src[i])
		i++;
	return (d + i);
}
