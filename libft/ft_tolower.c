/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltromber <ltromber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:20:23 by ltromber          #+#    #+#             */
/*   Updated: 2021/12/02 11:35:34 by ltromber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/* 
int	main(void)
{
	int c;
	c = 'Z';

	printf("VRAI : %c\n", tolower(c));
	//ft_tolower(c);
	printf("MOI : %c\n", ft_tolower(c));
} */