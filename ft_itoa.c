/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:44:35 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/25 07:00:59 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include"libft.h"

static	int	ft_strlendiv(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{	
		i = i * -1;
		i++;
	}
	if (nb == 0)
	i++;
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

static	void	itoiiii(long nb, int i, char *res, int sign)
{
	if (nb > 0)
	{
		while (i >= 0)
		{
			res[i] = (nb % 10) + 48;
			nb = nb / 10;
			i--;
		}
	}	
	if (nb < 0)
	{
		sign = sign * -1;
		nb = sign * nb;
		res[0] = '-';
		while (i > 0)
		{	
			res[i] = (nb % 10) + 48;
			nb = nb / 10;
			i--;
		}	
	}
}

char	*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*res;
	long	nb;

	nb = n;
	i = ft_strlendiv(n);
	sign = 1;
	res = (char *)malloc(sizeof(char) * (i + 1));
	res[i] = '\0';
	i--;
	if (nb == 0)
	{
		res[0] = '0';
	}
	itoiiii (nb, i, res, sign);
	return (res);
}

// int main ()
// {
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(9));
// 	printf("%s\n", ft_itoa(-9));
// 	printf("%s\n", ft_itoa(10));
// 	printf("%s\n", ft_itoa(-10));
// 		printf("%s\n", ft_itoa(8124));
// 	printf("%s\n", ft_itoa(-9874));
// 	printf("%s\n", ft_itoa(543000));
// 	printf("%s\n", ft_itoa(-10)); 
// 	return (0);
// }
