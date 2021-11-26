#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
//#include "libft.h"

static _Bool is_negative(int n)
{
    if (n == '-')
        return (true);
    else
        return (false);
    if (n == '+')
        n++;
    return (0);
}

char *ft_itoa(int n)
{
    char *s;

    
}

int main(void)
{
	int n = ' ';
	printf("RESULTAT: |%s|\n", (ft_itoa(n)));
}