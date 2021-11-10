/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltromber <ltromber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:20:23 by ltromber          #+#    #+#             */
/*   Updated: 2021/11/09 14:31:47 by ltromber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
/* 
int	ft_tolower(char *str);

int	main(void)
{
	char chaine[] = "Salut tu vas BIEN ?";

	printf("SOURCE : %s\n", chaine);
	ft_tolower(chaine);
	printf("RESULTAT : %s\n", chaine);
}
 */
int	ft_tolower(int c)
{
	int	i;

	i = 0;
	if (c >= 'A' && c <= 'Z')
		{
			c = c + 32;
			i++;
		}
		else
		{
			i++;
		}
	return (0);
}
