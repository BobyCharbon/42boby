#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *str) 
{
    char *str_duplicate;
    int str_len;

    str_len = ft_strlen(str);
    str_duplicate = malloc(ft_strlen (str) + 1);

    if (!str_duplicate)
        return (NULL);
    ft_strlcpy(str_duplicate, str, *(size_t*) str);
    return (str_duplicate);
}

/* 
int main(void)
{
    char str[] = "I malloc so I am.";
    printf("str_duplicate: %s\n", str_duplicate);
    ft_strdup(str);
} */