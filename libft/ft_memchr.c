#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    size_t i;

    i = 0;

    const char *h;

    h = str;

    while (h[i] || i <= n)
    {
        if(h[i] == c)
        {
            return((void *)h + i);

        }
    i++;
    }
    return (NULL);
}

