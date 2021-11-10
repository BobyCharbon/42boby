/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:32:40 by ltromber          #+#    #+#             */
/*   Updated: 2021/11/10 14:41:53 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int ft_isalnum(int a)
{
	return ((c >= '0' && c <= '9') || (c >= 'c' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int main(void)
{
	int a = 'd';
	printf("Résultat : %d", ft_isalnum(a));
}