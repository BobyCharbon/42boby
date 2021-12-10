/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltromber <ltromber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:06:34 by ltromber          #+#    #+#             */
/*   Updated: 2021/12/10 22:05:42 by ltromber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/*            La fonction bzero() met à 0 (octets contenant « \0 »)           */
/* -------------- les N premiers octets du bloc pointé par STR. ------------- */
/* -------------------------------------------------------------------------- */
/* --------------------------- VALEUR DE RETOUR: / -------------------------- */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
	ft_st
	/* size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = str;
	if (n <= 0)
		return (*str);
	while (j < (n - 1))
	{
		j = i;
		ptr[i] = 0;
		ptr[i] = ptr[j];
		i++;
	} */
}

// int main (void)
// {
// 	char str[] = "Salut";
// 	size_t n = 2;
// 	ft_bzero(str, n);
// }