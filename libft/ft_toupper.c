/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltromber <ltromber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:48:43 by ltromber          #+#    #+#             */
/*   Updated: 2021/12/02 11:35:36 by ltromber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	i;

	i = 0;
	while (c)
	{
		if (c >= 'a' && c <= 'z')
		{
			c = c - 32;
			return (c);
		}
		else
			return (c);
	}
	return (0);
}

/* 
int	main(void)
{
	int c;
	c = 'h';

	printf("SOURCE : %c\n",c);
	ft_toupper(c);
	printf("RESULTAT : %c\n",c);
}
 */