/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:06:34 by ltromber          #+#    #+#             */
/*   Updated: 2021/12/01 15:18:36 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
/* 
void	ft_bzero(void *str, size_t n);

int main(void)
{
	char s[] = "Salut mec comment tu vas ouais ca va";

	size_t n;
	n = 0;
	printf("AVANT : %s\n", s);
	bzero(s, n);
	printf("(vrai)après : >%s< RIEN\n", s); 
	ft_bzero(s, n);
	printf("(moi)après : >%s< RIEN\n", s);
}
 */
void	ft_bzero(void *str, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;

	char *ptr;

	ptr = str;

	if (n <= 0)
		return (*str);

	while (j < (n - 1))
	{
		j = i;
		ptr[i] = 0;
		ptr[i] = ptr[j];
		i++;
	}
}

// int main (void)
// {
// 	char str[] = "Salut";
// 	size_t n = 2;
// 	ft_bzero(str, n);
// }