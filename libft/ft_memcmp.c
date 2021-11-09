#include <string.h>
#include <stdio.h>
#include <unistd.h>

//#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n);

int main(void)
{
    int s1[] = { 54, 85, 20 };
    int s2[] = { 54, 85, 19 };
    
    size_t n;
    n = 20;

    printf("VRAI : %d\n", memcmp(s1, s2, n));
}


int ft_memcmp(const void *s1, const void *s2, size_t n)
{

}