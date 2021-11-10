#include <string.h>
#include <stdio.h>
#include <unistd.h>
//#include "libft.h"

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
    return (tmp);
}

int main(void)
{
    char src[] = "YYYYYYYY";
    char src_test[] = "YYYYYYYY";
    char dest[] = "XXXXXXXX";
    char dest_test[] = "XXXXXXXX";
    size_t n;
    
    char *ptr = memcpy(dest_test, src_test, n);
    char *ptr2 = ft_memcpy(dest_test, src_test, n);

    n = 0;
    printf("VRAI : %s\n", ptr);
    printf("MOI : %s\n", ptr2);
}