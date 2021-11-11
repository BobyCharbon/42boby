#include <string.h>
//#include <bsd/string.h>
#include <stdio.h>
#include <unistd.h>

//#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t n)
{
    int i;

    i = 0;

    // n = sizeof(dest);

    while (n-- && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    if (!src + i++)
    {
        dest[i] = 0;
        return (strlen(src));
    }


    return (0);
}

int main(void)
{
    char src[] = "YYYY";
    char dest[] = "XX";
    
    size_t n = 2;

    printf("VRAI : %lu\n", strlcpy(dest, src, sizeof(dest)));
    printf("MOI : %lu\n", ft_strlcpy(dest, src, n));
}