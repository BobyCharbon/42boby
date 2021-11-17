#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
//#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    char *dest;
    size_t s1_s2_size;
    size_t s1_size;
    size_t s2_size;

    s1_s2_size = strlen (s1) + strlen(s2);
    s1_size = strlen(s1);
    s2_size = strlen(s2);
    dest = malloc(sizeof(s1_s2_size + 1));
    if (dest == NULL)
        return (NULL);
    strlcpy(dest, s1, sizeof(s1_s2_size + 1));
    strlcpy(dest + s1_size, s2, sizeof(s1_s2_size + 1));
    dest[s1_s2_size] = 0;
    return ((char*) dest);
}
/* 
int main(void)
{
    const char s1[] = "Salut";
    const char s2[] = "Le rat";
    printf("Dest: %s\n", ft_strjoin(s1, s2));
} */