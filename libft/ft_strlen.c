/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 19:47:31 by ltromber          #+#    #+#             */
/*   Updated: 2021/12/02 10:54:07 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

/* -------------------------------------------------------------------------- */
/*                     VA CALCULER LE NOMBRE DE CARACTERES                    */
/* ----------------------------- DANS LA STRING ----------------------------- */
/* -------------------------------------------------------------------------- */


size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	chaine [] = "Salut";

// 	ft_strlen(chaine);
// 	printf(ft_strlen);
// }
