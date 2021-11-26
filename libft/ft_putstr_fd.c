#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//#include "libft.h"

void ft_putstr_fd (char *s, int fd)
{
    int i;

    i = 0;
    if (!fd || !s)
        return;
    while (((char*)s)[i])
    {
        write(fd, s + i, 1);
        i++;
    }
}
/* 
int main(void)
{
    char s[] = "Salut";
    // printf("RESULTAT: |%s|\n", ft_putstr_fd(s));
    ft_putstr_fd(s);
} */