#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    const char *s2;

    int i;

    i = 0;

    if (s == NULL)
        return (NULL);
    if (strlen((char*) s) + start < len)
        len = strlen((char*) (s + start));
    s2 = malloc(sizeof(char) * (len + 1));
    if (s2 == NULL)
        return ((char*) s2);
    if ((start > strlen(s)))
        return ((char*) s2);
    while (len-- >= 1 && s[i])
    {
        ((char*) s2)[i] = ((char*) s)[start];
        i++;
        start++;
    }
    ((char*) s2)[i++] = 0;
    return ((char*) s2);
}

int main(void)
{
    const char s[] = "tripouille";
    unsigned int start = 100;

    size_t len = 1;
    printf("RESULTAT:|%s|\n", ft_substr(s, start, len));
}

