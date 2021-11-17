#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *str) 
{
    char *str_duplicate;

    str_duplicate = malloc(sizeof(str));

    if (str_duplicate == NULL)
        return (str_duplicate);

    strcpy(str_duplicate, str);
    return (str_duplicate);
}
/* 
int main(void)
{
    char str[] = "Salut mec";
    ft_strdup(str);
    // printf("str_duplicate: %s\n", str_duplicate);
} */