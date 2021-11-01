/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltromber <ltromber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:28:19 by ltromber          #+#    #+#             */
/*   Updated: 2021/11/01 18:36:44 by ltromber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strrchr(char *str, char c, char dest);

int main(void)
{
	char chaine[] = "Ah ouais gros tema la taille du raph";
	char dest[50];

	const char c = 't';
	ft_strrchr(chaine, c, dest);
	printf("%s", chaine);
}

int	ft_strrchr(char *str, char c, char dest)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;

	while (str[i])
	{
		i++;
	}
	while (str[i] != c)
	{
		i--;
		if (str[i] == c)
		{
			dest[j] = str[i]
			j++;
			i--;
		}
	}
	return (0);
}