/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingtringer <kingtringer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:28:19 by ltromber          #+#    #+#             */
/*   Updated: 2021/11/02 12:57:02 by kingtringer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int c);

int main(void)
{
	char chaine[] = "Ah ouais gros tema la taille du raph";

	const char c = 't';
	printf("VRAI : %s\n\n", strrchr(chaine, c));
	printf("MOI : %s\n", ft_strrchr(chaine, c));
}

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			j = i;
		}
		i++;
	}
	return (str + j);
}
