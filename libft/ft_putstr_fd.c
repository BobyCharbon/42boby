/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:52:17 by ludovictrom       #+#    #+#             */
/*   Updated: 2021/12/02 10:52:18 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void ft_putstr_fd (char *s, int fd)
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
}

/* 
int main(void)
{
    char s[] = "Salut";
    // printf("RESULTAT: |%s|\n", ft_putstr_fd(s));
    ft_putstr_fd(s);
} */