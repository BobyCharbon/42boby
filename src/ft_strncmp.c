#include <string.h>
#include <unistd.h>
#include <stdio.h>

int ft_strncmp(const char *str1, const char *str2, size_t n);


int main(void)
{
    const char s1[] = "Salut";
    const char s2[] = "Salut ";
    size_t n = 10;
    printf("VRAI : %d\n\n", strncmp(s1, s2, n));
    printf("MOI : %d\n", ft_strncmp(s1, s2, n));
}

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    int i;
    int j;

    i = 0;

    while ((i <= n) || (str1[i] || str2[i]))
    {
        if (str1[i] != str2[i])
        {
            j = str1[i] - str2[i];
            //i = '0' + j;
            return (j);
        }
        i++;
    }
    return (i);
}