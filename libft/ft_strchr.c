/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltromber <ltromber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:37:40 by ltromber          #+#    #+#             */
/*   Updated: 2021/11/01 18:26:42 by ltromber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strchr(char	*str, char c, char *dest);

int	main(void)
{
	char	chaine[] = "Ah ouais gros tema la taille du raph";
	char	dest[50];

	const char c = 't';
	ft_strchr(chaine, c, dest);
	printf("Source : %s\n", chaine);
	printf("A Rechercher : %c\n", c);
	printf("Phrase trouvee : %s\n", dest);
}

int	ft_strchr(char	*str, char c, char *dest)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while (str[i] != c)
	{
		i++;
	}
	if (str[i] == c)
	{
		while (str[i])
		{
			dest[j] = str[i];
			i++;
			j++;
		}
		
	}
	
	return (0);
}
