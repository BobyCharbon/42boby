/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingtringer <kingtringer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:06:34 by ltromber          #+#    #+#             */
/*   Updated: 2021/11/03 23:33:23 by kingtringer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_bzero(void *str, size_t n);

int main(void)
{
	char s[] = "Salut mec comment tu vas ouais ca va";

	size_t n;
	n = 10;
	printf("AVANT : %s\n", s);
	bzero(s, n);
	printf("(vrai)après : >%s< RIEN\n", s); 
	ft_bzero(s, n);
	printf("(moi)après : >%s< RIEN\n", s);
}

void	ft_bzero(void *str, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;

	char *ptr;

	ptr = str;

	while (j < (n - 1))
	{
		j = i;
		ptr[i] = 0;
		ptr[i] = ptr[j];
		i++;
	}
}