/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingtringer <kingtringer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:28:19 by ltromber          #+#    #+#             */
/*   Updated: 2021/11/02 11:48:54 by kingtringer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strrchr(char *str, char c);

int main(void)
{
	char chaine[] = "Ah ouais gros tema la taille du raph";
	//char dest[50];

	const char c = 't';
	printf("VRAI : %s\n\n", strrchr(chaine, c));
	ft_strrchr(chaine, c);
	printf("MOI : %s\n", ft_strrchr);
}

int	ft_strrchr(char *str, char c)
{
	int	i;
	int	*j;
	
	i = 0;
	j = 0;

	while (str[i] != c)
	{
		i++;
	}
	while (str[i] == c)
	{
		j = i;
		i++;
	}
	return (str[j]);
}