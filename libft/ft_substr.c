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

    s2 = malloc(len + 1);
    if (s == NULL)
        return (NULL);
    if (s2 == NULL)
        return ((char*) s2);
    if ((start > ft_strlen(s)))
        return ((char*) s2);
    while (len-- >= 1)
    {
        ((char*) s2)[i] = ((char*) s) [start];
        i++;
        start++;
    }
    ((char*) s2)[i] = 0;
    return ((char*) s2);    
}
/* 
int main(void)
{
    const char s[] = "Salut le rat";
    unsigned int start = 20;

    size_t len = 16;
    printf("RESULTAT : %s\n", ft_substr(s, start, len));
}
*/