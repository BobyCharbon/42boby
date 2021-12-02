/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:54:19 by ludovictrom       #+#    #+#             */
/*   Updated: 2021/12/02 10:54:20 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"


char    *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t i;
    int j;

    i = 0;

    if (!needle[i])
        return ((char*) &haystack[i]);
    if (!haystack[i])
        return (NULL);
    while (haystack[i] && i < n)
    {
        j = 0;
        if (haystack[i] == needle[j])
        {
            while((haystack[i + j] == needle[j]) && (needle[j]))
                j++;
            if (!needle[j] && n >= (i + j))
                return ((char*) &haystack[i]);
        }
        i++;
    }
    return (NULL);
}

/* 
int main(void)
{
    const char haystack[] = "aaabcabcd";
    const char needle[] = "c";

    size_t n = -1;

    printf("VRAI: %s\n", strnstr(haystack, needle, n));
    printf("Moi: %s\n", ft_strnstr(haystack, needle, n));
} */