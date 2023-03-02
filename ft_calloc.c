/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:08:18 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/25 06:50:25 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

static size_t	ft_securite(size_t nmemb, size_t size)
{
	size_t	size_max;

	size_max = LONG_MAX;
	if (nmemb == 0 || size == 0)
		return (0);
	if (nmemb > size_max / size || size > size_max / nmemb)
		return (LONG_MAX);
	return (nmemb * size);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tab;

	tab = malloc(ft_securite(nmemb, size));
	if (!tab)
		return (NULL);
	ft_memset(tab, 0, ft_securite(nmemb, size));
	return (tab);
}

// int main ()
// {
// 	size_t nmemb = 6;
// 	size_t size = 6;
// 	ft_calloc(nmemb, size);
// }