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

    while (i < n)
    {
        if(h[i] == c)
        {
            return((void *)h + i);

        }
    i++;
    }
    return (NULL);
}
/* 
int main(void)
{
    char str[] = "/|\x12\xff\x09\x42\042\42|\\";
    int c = '\x42';
    size_t n = 2;
    printf("VRAI : %s\n", memchr(str, c, n));
    printf("Moi : %s\n", ft_memchr(str, c, n));
} */