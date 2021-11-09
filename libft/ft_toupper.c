/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltromber <ltromber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:48:43 by ltromber          #+#    #+#             */
/*   Updated: 2021/11/09 14:30:53 by ltromber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"
/* 
int	ft_toupper(char *chaine);

int	main(void)
{
	char chaine[] = "Salut ca va ?";

	printf("SOURCE : %s\n",chaine);
	ft_toupper(chaine);
	printf("RESULTAT : %s\n",chaine);
}
 */

int	ft_toupper(int c)
{
	int	i;

	i = 0;
	if (c >= 'a' && c <= 'z')
		{
			c = c - 32;
			i++;
		}
		else
		{
			i++;
		}
	return (0);
}
