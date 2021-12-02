/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:32:40 by ltromber          #+#    #+#             */
/*   Updated: 2021/12/02 10:58:50 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') 
			|| (c >= 'A' && c <= 'Z'));
}

/* 
int main(void)
{
	int a = 'd';
	printf("Résultat : %d", ft_isalnum(a));
} */