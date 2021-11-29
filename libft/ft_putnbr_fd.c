#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

/* -------------------------------------------------------------------------- */
/*                     Ecrit l'integer 'n' sur le fd donné                    */
/* -------------------------------------------------------------------------- */
/* ----------------------------- utiliser write ----------------------------- */
/* ------------------ convertir les int en char pour write ------------------ */
/* -------------------------------------------------------------------------- */




void ft_putnbr_fd (int n, int fd)
{
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        if (n < -9)
            ft_putnbr_fd(n / -10, fd);
        ft_putnbr_fd(-(n % 10), fd);
    }
    else if (n >= 0 && n <= 9)
        ft_putchar_fd (n + 48, fd);
    else
    {
        ft_putchar_fd (n / 10, fd);
        ft_putchar_fd (n % 10, fd);
    }
}
/* 
int main(void)
{
    int n = -8;
    int fd;
    ft_putnbr_fd(n, fd);
} */