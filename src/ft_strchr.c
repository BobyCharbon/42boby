/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingtringer <kingtringer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:37:40 by ltromber          #+#    #+#             */
/*   Updated: 2021/11/02 12:17:24 by kingtringer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strchr(const char	*str, int c);

int	main(void)
{
	char	chaine[] = "Ah ouais gros tema ta taille du raph";
	//char	dest[50];

	int c = 't';
	//ft_strchr(chaine, c);
	printf("VRAI : %s\n\n",strchr(chaine, c));
	//printf("Source : %s\n", chaine);
	//printf("A Rechercher : %c\n", c);
	printf("MOI : %s\n", ft_strchr(chaine, c));
}

char	*ft_strchr(const char	*str, int c)
{
	int	i;

	i = 0;

	while (str[i] != c)
	{
		i++;
	}
	return (str + i);
}
