#include <string.h>
//#include <bsd/string.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

//#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;
    int j;

    i = 0;
    j = 0;

    if (size == 0)
    {
        return(0);
    }
    
    while (size--)
    {
        dst[i] = src[i];
        i++;
        j++;    
        if (size == 1)
        {
            dst[i++] = 0;
            return(*(char*)dst);
        }
    }
}

int main(void)
{
    char src[] = "SalutHHHHH";
    char dst[] = "XXXXXLe rat";
    
    size_t size = 6;

    snprintf(dst, size, "%s", src);
    //printf("VRAI : %s\n", strlcpy(dst, src, size));
/* 
    char src[] = "Salut ";
    char dst[] = "XXXXX Le rat";
    size_t size = 5;
 */
    printf("MOI : %s\n", ft_strlcpy(dst, src, size));
}