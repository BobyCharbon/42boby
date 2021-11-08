/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingtringer <kingtringer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:52:24 by ludovictrom       #+#    #+#             */
/*   Updated: 2021/11/08 15:21:03 by kingtringer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

void *ft_memset(void *s, int c, size_t  n);

int main(void)
{
    char h[] = "Salut";

    size_t n;
    int c;
    
    n = 2;
    c = 'X';
    memset(h, c, n);
    char s[] = "Salut";
    ft_memset(s, c, n);
}

void *ft_memset(void *s, int c, size_t  n)
{
    char *str;
    size_t i;
    size_t j;

    str = s;
    i = 0;
    j = 0;

    while (str[i] && i < n)
    {
        str[i] = c;
        i++;
        j++;
    }
    return (0);

}