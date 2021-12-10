/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltromber <ltromber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:28:19 by ltromber          #+#    #+#             */
/*   Updated: 2021/12/10 21:57:54 by ltromber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -------------------------------------------------------------------------- */
/*        renvoie un pointeur sur la dernière occurrence du caractère C       */
/* --------------------------- dans la chaîne STR --------------------------- */
/* -------------------------------------------------------------------------- */
/* ---------------------------- VALEUR DE RETOUR: --------------------------- */
/* ---------- renvoie un pointeur sur le caractère correspondant ou --------- */
/* ---------------- NULL si le caractère n'a pas été trouvé. ---------------- */
/* -------------------------------------------------------------------------- */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t			str_size;

	if (!str)
		return (NULL);
	str_size = strlen(str);
	if ((char) c == '\0')
		return ((char *) str + str_size);
	while (str_size > 0)
	{
		if (str[str_size - 1] == (char) c)
			return ((char *) str + str_size - 1);
		str_size--;
	}
	return (NULL);
}

/* int main(void)
{
	char chaine[] = "ltripouiel";

	char c = 'l';
	printf("VRAI : %s\n\n", strrchr(chaine, c));
	printf("MOI : %s\n", ft_strrchr(chaine, c));
} */