#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t len)
{
    size_t i;
    size_t j;
    size_t src_len;
    size_t dest_len;
    size_t res;

    i = 0;
    
    src_len = strlen(src);
    dest_len = strlen(dest);

    j = dest_len - src_len;

    if(!*dest || !*src || len < dest_len || len <= 0)
        return (src_len + len);

    while (j < dest_len && i < src_len)
    {
        dest[j] = src[i];
        j++;
        i++;
    }
    dest[j] = 0;
    return (src_len + dest_len);
}

/* 
int main(void)
{
    char dest [15] = "XXXXXXXXXX";
    char src [] = "YYYYY";

    char dest_test [15] = "XXXXXXXXXX";
    char src_test [] = "YYYYY";

    size_t len = 4;

    printf("Moi: %zu\n", ft_strlcat(dest, src, sizeof(dest)));
    printf("VRAI: %lu\n", strlcat(dest_test, src_test, sizeof(dest_test)));
    printf("\ndest_test : %s\n", dest_test);
    printf("dest      : %s\n", dest_test);
} */