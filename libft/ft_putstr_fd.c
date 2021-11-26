#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void ft_putstr_fd (char *s, int fd)
{
    int i;

    i = 0;

    while (((char*) s)[i])
    {
        write(fd, s, 1);
        i++;
    }
}
/* 
int main(void)
{
    char s[] = "Salut";
    int fd;
    fd = 0;
    printf("RESULTAT: |%s|\n", ft_putstr_fd(s, fd));
} */