/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:06:34 by ltromber          #+#    #+#             */
/*   Updated: 2021/12/02 10:50:20 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

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