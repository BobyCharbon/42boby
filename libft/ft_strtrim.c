#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"
#include <stdlib.h>
#include <stdbool.h>

/* static _Bool setchar_egal (char *s1, char *set, int i, int k)
{
    if (s1[i] == set[k])
        return (true);
    else
        return (false);
} */

/* static _Bool char_diff (char *s1, char *set, int i, int k)
{
    k = 0;
    while (set[k])
    {
        if (s1[i] != set[k])
            k++;    
        else
            return (false);
    }
    return (true);
} */

static size_t string_end (char *s1, char *set, int i, size_t s1_size)
{
    int k;
    k = 0;

    while (s1[i])
    {
        while (s1[s1_size] != set[k])
        {
            if (!set[k])
                return (s1_size + 1);
            k++;
        }
        k = 0;
        s1_size--;
    }
    return (s1_size);
}

static size_t string_start (char *s1, char *set, int k) 
{
    size_t i;
    size_t x;
    x = 0;
    i = 0;
    while (s1[i])
    {
        while (s1[i] != set[k])
        {
            k++;
            if (!set[k])
                return (i);
        }
        k = 0;
        i++;
    }
    return (i);
}

char *ft_strtrim(const char *s1, const char *set)
{
    char *tmp;
    size_t j;
    size_t k;
    int s1_size;
    int s1_size_end;
    int s1_size_start;

    j = 0;
    k = 0;

    if (s1 == NULL)
        return (NULL);
    if (set == NULL)
        return ((char*) s1);
    s1_size = strlen(s1);
    s1_size_start = string_start((char*) s1, (char*) set, k);
    s1_size_end = string_end((char*) s1, (char*) set, s1_size_start, s1_size);
    tmp = malloc(s1_size_end - s1_size_start + 1 * sizeof(char));
    if (tmp == NULL)
        return (NULL);
    
    while (s1_size_start < s1_size_end)
    {
        tmp[j] = ((char*) s1)[s1_size_start];
        j++;
        s1_size_start++;
    }
    tmp[j] = 0;
    return ((char*) tmp);
}
/* 
int main(void)
{
    const char s1[] = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\t";
    const char set[] = " \n\t";
    printf("RESULTAT: |%s|\n", ft_strtrim(s1, set));
} */