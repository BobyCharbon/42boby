#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"
#include <stdlib.h>

char *ft_strtrim(const char *s1, const char *set)
{
    char *tmp;
    int i;

    i = 0;
    tmp = malloc((char) sizeof(s1));
    if (tmp == NULL)
        return (NULL);

    while (s1[i])
    {
        if (tmp[i] == set)
            i++;
        tmp[i] = *(char*) set;
        i++;
    }
    return (tmp);
}

int main(void)
{
    const char s1[] = "-Salut gros rat-";
    const char set[] = "-";
    printf("RESULTAT: %s\n", ft_strtrim(s1, set));
}