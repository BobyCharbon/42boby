#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    const char *s2;

    int i;

    i = 0;

    s2 = malloc(len + 1);

    if (s2 == NULL)
        return ((char*) s2);

    while (len--)
    {
        ((char*) s2)[i] = ((char*) s) [start];
        i++;
        start++;
    }


    // printf("S: %s\n", s);
    // printf("S2: %s\n", s2);
    return ((char*) s2);    
}

int main(void)
{
    const char s[] = "Salut le rat";
    unsigned int start = 6;

    size_t len = sizeof((char*)s);
    printf("RESULTAT : %s\n", ft_substr(s, start, len));
}