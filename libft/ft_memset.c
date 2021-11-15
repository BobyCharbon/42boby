/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:52:24 by ludovictrom       #+#    #+#             */
/*   Updated: 2021/11/15 19:00:27 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

void *ft_memset(void *s, int c, size_t  n)
{
    char *str;
    size_t i;

    str = s;
    i = 0;

    while (n--)
    {
        str[i] = c;
        i++;
    }
    return ((char*)str);

}
/* 
int main(void)
{
    char h[] = "A";
    char s[] = "A";

    size_t n;
    int c;
    
    n = 2;
    c = 'X';
    printf("VRAI : %s\n", memset(h, c, n));
    printf("Moi : %s\n", ft_memset(s, c, n));
}
 */