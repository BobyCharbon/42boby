/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:54:37 by ludovictrom       #+#    #+#             */
/*   Updated: 2021/12/02 10:54:38 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    const char *s2;

    int i;

    i = 0;

    if (s == NULL)
        return (NULL);
    if (ft_strlen((char*) (s + start)) < len)
        len = strlen((char*) (s + start));
    s2 = malloc(sizeof(char) * (len + 1));
    if (s2 == NULL)
        return ((char*) s2);
    if ((start > strlen(s)))
        return ((char*) s2);
    while (len-- >= 1 && s[i])
    {
        ((char*) s2)[i] = ((char*) s)[start];
        i++;
        start++;
    }
    ((char*) s2)[i++] = 0;
    return ((char*) s2);
}

/* 
int main(void)
{
    const char s[] = "i just want this part #############";
    unsigned int start = 5;

    size_t len = 10;
    printf("RESULTAT : %s\n", ft_substr(s, start, len));
} */

