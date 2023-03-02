/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 01:52:39 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/18 17:05:00 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include"libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

// int main ()
// {
// 	char s [] = "ALLEZ LA KCORP";
// 	int fd;
// 	fd = 1;
// 	ft_putstr_fd(s, fd);
// }