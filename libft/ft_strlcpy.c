#include <string.h>
//#include <bsd/string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
    size_t i;

    i = 0;

    int src_size;

    src_size = strlen((char*) src);

    if (dest_size <= 0)
        return (src_size);

    while (i < (dest_size - 1) && i < (size_t) src_size)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return (src_size);
}
/* 
int main(void)
{
    char src[] = "YYYY";
    char dest[] = "";
    
    size_t dest_size = 2;

    printf("MOI : %lu\n", ft_strlcpy(dest, src, dest_size));
    printf("VRAI : %lu\n", strlcpy(dest, src, dest_size));
} */