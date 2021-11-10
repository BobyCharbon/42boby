/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 19:34:50 by ltromber          #+#    #+#             */
/*   Updated: 2021/11/10 14:07:56 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isprint(int a)
{
	return (a >= 0 && a <= 126);
}

int main(void)
{
	int a;
	a = 'a';
	ft_isprint(a);
	printf("Résultat : %d", ft_isprint(a));
}
