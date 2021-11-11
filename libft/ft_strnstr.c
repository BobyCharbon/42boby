#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"


char    *ft_strnstr(const char *big, const char *little, size_t n)
{
    size_t i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;

    if (!little[i])
        return ((char*) &big[i]);
    if (!big[i])
        return (NULL);
    while (big[i] && n--)
    {
        if (big[i] == little[i])
        {
            while((big[i + j] == little[j]) && (little[j]))
                j++;
            if (!little[1])
                return ((char*) &big[i]);
            if (!little[j] && n >= (i + j))
                return ((char*) &big[i]);
        }
        i++;
    }
    return (NULL);
}

int main(void)
{
    const char big[] = "c";
    const char little[] = "c";

    size_t n;

    n = 1;

    printf("VRAI: %s\n", strnstr(big, little, n));
    printf("Moi: %s\n", ft_strnstr(big, little, n));
}