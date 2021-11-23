#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"
#include <stdlib.h>

char *ft_strtrim(const char *s1, const char *set)
{
    char *tmp;
    size_t i;
    size_t j;
    size_t s1_size;

    i = 0;
    j = 0;

    s1_size = strlen(s1);
    tmp = malloc(s1_size - 1 * sizeof(char));
    if (tmp == NULL)
        return (NULL);
    while ( s1[i])
    {
        if (((char*) s1)[i] == *(char*) set)
            i++;
        tmp[j] = ((char*) s1)[i];
        if (!s1[i])
            return (tmp);
        j++;
        i++;
    }
    return (tmp);
}
/* 
int main(void)
{
    const char s1[] = "-Salut gros rat-";
    const char set[] = "-";
    printf("RESULTAT: %s\n", ft_strtrim(s1, set));
} */