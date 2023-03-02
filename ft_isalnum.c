/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:24:15 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/19 11:02:27 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (c);
	return (0);
}

// int	ft_isalpha(int c)
// {
// 	if ((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a'))
// 	{
// 		return (c);
// 	}
// 	else
// 	{
// 		return (0);
// 	}
// }

// int	ft_isdigit(int c)
// {
// 	if ((c >= '0' && c <= '9'))
// 		return (c);
// 	return (0);
// }