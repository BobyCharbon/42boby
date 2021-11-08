#include <string.h>
#include <stdio.h>
#include <unistd.h>

//#include "libft.h"

char ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;

    i = 0;

    if (size == 0)
    {
        return(0);
    }
    
    while (size--)
    {
        dst[i] = src[i];
        i++;    
        if (size == 1)
        {
            dst[i] = 0;
            return(*(char*)dst);
        }
    }
}

int main(void)
{
    char src[] = "Salut";
    char dst[] = "XXXXX Le rat";
    
    size_t size = 5;

/* 
    printf("VRAI : %s\n", strlcpy(dst, src, size));
    char src[] = "Salut ";
    char dst[] = "XXXXX Le rat";
    size_t size = 5;
 */
    printf("MOI : %s\n", ft_strlcpy(dst, src, size));
}