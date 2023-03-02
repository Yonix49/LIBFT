/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:01:19 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/24 14:39:07 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include"libft.h"

void	ft_putendl_fd(char *s, int fd)
{	
	char	space;

	space = '\n';
	write(fd, s, ft_strlen(s));
	write(fd, &space, 1);
}	

// int main ()
// {
// 	int fd = 0;
// 	char s [] = "Niceuuuuuuuuuuuuh";
// 	ft_putendl_fd(s,fd);
// }

// int		main(int argc, const char *argv[])
// {
// 	int		arg;

// 	alarm(5);
// 	if (argc == 1)
// 		return (0);
// 	else if ((arg = atoi(argv[1])) == 1)
// 		ft_putendl_fd("lorem ipsum dolor sit amet", 2);
// 	else if (arg == 2)
// 		ft_putendl_fd("  lorem\nipsum\rdolor\tsit amet  ", 1);
// 	else if (arg == 3)
// 		ft_putendl_fd("", 2);
// 	else if (arg == 4)
// 		ft_putendl_fd("lorem ipsum do\0lor sit amet", 1);
// 	return (0);
// }