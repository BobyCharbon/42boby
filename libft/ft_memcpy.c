#include <string.h>
#include <stdio.h>
#include <unistd.h>

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;
    char *tmp = dest;
    const char *source = src;

    while (n--)
    {                      
        *tmp++ = *source++;
        i++;
    }
    return dest;
}