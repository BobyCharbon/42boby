#include <string.h>
#include <stdio.h>
#include <unistd.h>

//#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const char *str;
    const char *str2;
    int i;
    int j;

    str = s1;
    str2 = s2;
    i = 0;
    j = 0;

    while (n--)
    {
        if (str[i] != str2[i])
        {
            j = str[i] - str2[i];
            return(j);
        }
        if (str[i] == str2[i])
        {
            i++;
        }
    }
    
    return (0);
}

int main(void)
{
    const char s1[] = "Sabut";
    const char s2[] = "Salut";
    
    size_t n;
    n = 30;

    printf("VRAI : %d\n\n", memcmp(s1, s2, n));
    printf("MOI: : %d\n", ft_memcmp(s1, s2, n));
}