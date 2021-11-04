#include <string.h>
#include <stdio.h>
#include <unistd.h>

//#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n);

int main(void)
{
    char src[] = "YYYYYYYYYYYYYYYYYYYYYYYY";
    char src_test[] = "YYYYYYYYYYYYYYYYYYYYY";
    char dest[] = "XXXXXXXXXXXXXXXXXXXX";
    char dest_test[] = "XXXXXXXXXXXXXXXXXXXX";
    size_t n;
    
    n = 10;
    printf("VRAI : %s\n",memcpy(dest_test, src_test, n));
    printf("MOI : %s\n", ft_memcpy(dest, src, n));
}

void *ft_memcpy(void *dest, const void *src, size_t n)
{

    /*
    size_t i;
    size_t j;
    size_t l;

    const char *source;
    const char *destination;
    source = src;
    destination = dest;
    char destination;
    destination = *dest;
    l = 0;
    i = 0;
    j = 0;
    */

    char *tmp = dest;
    const char *source = src;
    
    while (n--)
    {
        *tmp++ = *source++;
    }
    return dest;
    

    /* 
    while (destination[j] || (i < n))
    {
        destination[j] = src + i;
        i++;
        j++;
    }
     */
}