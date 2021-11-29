#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void ft_putnbr_fd (int n, int fd)
{
    int i;

    i = 0;

    write(fd, &n, 1);
}
/* 
int main(void)
{
    int n = 1;
    ft_putnbr_fd(n, fd);
} */