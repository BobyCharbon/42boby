#include <string.h>
#include <unistd.h>
#include <stdio.h>

void *ft_memchr(const void *str, int c, size_t n)
{
    int i;

    i = 0;

    char *h;

    h = str;

    while (h[i] || h[i] <= n)
    {
        if(h[i] == c)
        {
            return(h + i);

        }
    i++;
    }
    return (NULL);
}