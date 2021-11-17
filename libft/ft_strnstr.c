#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"


char    *ft_strnstr(const char *str1, const char *str2, size_t n)
{
    size_t i;
    int j;

    i = 0;
    j = 0;

    if (!str2[i])
        return ((char*) &str1[i]);
    if (!str1[i])
        return (NULL);
    while (str1[i] && n--)
    {
        if (str1[i] == str2[j])
        {
            while((str1[i + j] == str2[j]) && (str2[j]))
                j++;
            if (!str2[j])
                return ((char*) &str1[i]);
            if (!str2[j] && n >= (i + j))
                return ((char*) &str1[i]);
        }
        i++;
    }
    return (NULL);
}
/* 
int main(void)
{
    const char str1[] = "AAAAAAAAAAAAA";
    const char str2[] = "\0";

    size_t n = sizeof(str1);

    printf("VRAI: %s\n", strnstr(str1, str1, n));
    printf("Moi: %s\n", ft_strnstr(str1, str1, n));
} */