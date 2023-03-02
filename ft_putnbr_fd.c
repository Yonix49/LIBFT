/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:03:53 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/24 14:39:19 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include"libft.h"

static	int	ft_putnbr(int n, int fd)
{
	long int	nb;

	nb = (long int)n;
	if (nb == -2147483648)
	{
		ft_putchar_fd ('-', fd);
		ft_putchar_fd ('2', fd);
		nb = 147483648;
	}	
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar_fd (nb + 48, fd);
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		ft_putnbr (nb * (-1), fd);
	}
	if (nb >= 10)
	{
		ft_putnbr (nb / 10, fd);
		ft_putnbr (nb % 10, fd);
	}
	return (0);
}

void	ft_putnbr_fd(int n, int fd)
{
	ft_putnbr (n, fd);
}

// int main ()
// {
// 	int n = -2147483648LL;
// 	int fd = 0;
// 	ft_putnbr_fd(n , fd);
// }