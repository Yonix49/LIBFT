/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhajji-b <mhajji-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 00:20:10 by mhajji-b          #+#    #+#             */
/*   Updated: 2022/11/20 14:37:21 by mhajji-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		taille;
	int		i;
	char	*chaine;

	if (!s1 || !set)
		return (NULL);
	taille = ft_strlen(s1) - 1;
	i = 0;
	while (s1[i] && ft_strchr(set, (int)s1[i]))
		i++;
	while (s1[i] && ft_strchr(set, (int)s1[taille]))
		taille--;
	chaine = ft_substr(s1, i, taille - i + 1);
	return (chaine);
}

// int main ()
// {
// 	const char s1 [] = "abcdba";
// 	const char set [] = "acb";
// 	printf("Le retour du dest %s\n", ft_strtrim(s1, set));
// 	return (0);
// }
// 	// s = ft_strtrim("abcdba", "acb");
// 	// /* opsec-infosec 15 */ check(!strcmp(s, "d"));
//  	// /* opsec-infosec 16 */ mcheck(s, 2); free(s); showLeaks();