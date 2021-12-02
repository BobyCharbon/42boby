/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:44:11 by ludovictrom       #+#    #+#             */
/*   Updated: 2021/12/02 14:49:47 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* -------------------------------------------------------------------------- */
/*         Applique la fonction 'f' à chaque caractère de la chaine de        */
/* ---- cractère de la chaine de caractères passée en argument pour créer --- */
/* ------------- une nouvelle chaine de caractères (avec malloc) ------------ */
/* -------------- successives de 'f' résultant des applications ------------- */
/* -------------------------------------------------------------------------- */
/* ------------ *s = la chaine de caractères sur laquelle itérer ------------ */
/* ------------- *f = la fonction à appliquer à chaque caractère ------------ */
/* -------------------------------------------------------------------------- */
/* ---------------------------- VALEUR DE RETOUR: --------------------------- */
/* ----- la chaine de caractères résultant des applications successives ----- */
/* ---------------------------------- de f. --------------------------------- */
/* ------------------ retourne NULL si l'allocation échoue ------------------ */
/* -------------------------------------------------------------------------- */

char *ft_strmapi(const char *s, char (*f) (unsigned int, char))
{
        int i;

        i = 0;
        (char *) s = malloc(strlen((char *) s) * sizeof(char));
}

int main(void)
{

}