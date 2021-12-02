/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:52:00 by ludovictrom       #+#    #+#             */
/*   Updated: 2021/12/02 10:52:01 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

/* -------------------------------------------------------------------------- */
/*         Écrit La chaine de caractères ’s’ sur le file descriptor         */
/* ----------------- donné, suivie d’un retour à la ligne ----------------- */
/* -------------------------------------------------------------------------- */


void ft_putendl_fd (char *s, int fd)
{
    int i;

    i = 0;
    if (!fd || !s)
        return;
    while (((char*)s)[i])
    {
        write(fd, s + i, 1);
        i++;
    }
    write (fd, "\n", 1);
}

/* 
int main(void)
{
    char s[] = "Salut";
    
} */