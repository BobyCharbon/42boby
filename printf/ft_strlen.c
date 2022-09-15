/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 19:47:31 by ltromber          #+#    #+#             */
/*   Updated: 2022/02/11 16:13:26 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/*             calcule la longueur de la chaîne de caractères STR,            */
/* ----------------- sans compter l'octet nul « \0 » final. ----------------- */
/* -------------------------------------------------------------------------- */
/* ---------------------------- VALEUR DE RETOUR: --------------------------- */
/* --------------- le nombre de caractères dans la chaîne STR --------------- */
/* -------------------------------------------------------------------------- */

#include "ft_printf.h"

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
