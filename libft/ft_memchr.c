/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:51:23 by ludovictrom       #+#    #+#             */
/*   Updated: 2021/12/02 11:00:09 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    size_t i;

    i = 0;

    while (i < n)
    {
        if ((unsigned char) c == ((unsigned char*) str)[i])
            return((void *)str + i);
    i++;
    }
    return (NULL);
}

/* 
int main(void)
{
    char str[] = {0, 1, 2 ,3 ,4 ,5};
    int c = 258;
    size_t n = 3;
    printf("VRAI : %s\n", memchr(str, c, n));
    printf("Moi : %s\n", ft_memchr(str, c, n));
    printf("CHECK : %s\n", memchr(str, 2 + 256, n));
    // printf("%s\n"ft_memchr(str, 2 + 256, n) == str + 2);
} */