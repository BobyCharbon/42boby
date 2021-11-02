#include <string.h>
#include <unistd.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n);

int main(void)
{
    char s[] = "Salut ca va";
    int c;
    size_t n;

    n = 10;
    c = 'c';
    printf("VRAI : %p\n\n", memchr(s, c, n));
    printf("MOI : %p\n", ft_memchr(s, c, n));
}

void *ft_memchr(const void *str, int c, size_t n)
{
    int i;

    i = 0;

    while (str[i] || str[i] <= n)
    {
        if (str[i] == c)
        {
            i += c;
        }
        i++;
    }
}