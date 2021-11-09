#include <string.h>
#include <stdio.h>
#include <unistd.h>

//#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n);

int main(void)
{
    char src[] = "YYYYYYYY";
    char dest[] = "XXXXXXXX";
    size_t n;
    
    n = 20;
    //printf("VRAI : %s\n",memcpy(dest_test, src_test, n));
    //printf("MOI : %s\n", ft_memcpy(dest, src, n));
    ft_memcpy(dest, src, n);
}

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