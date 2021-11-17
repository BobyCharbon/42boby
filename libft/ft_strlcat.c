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

    // if(!*dest || !*src || len <= 0)
    if (dest_len <= len)
        res = dest_len + src_len;
    else
        res = src_len + len;
    while (j < dest_len && i < src_len)
    {
        ((unsigned char*) dest)[j] = ((unsigned char*) src)[i];
        j++;
        i++;
    }
    dest[j] = 0;
    return (res);
}


int main(void)
{
    char dest [] = "XXXXXXXXXX";
    char src [] = "YYYYY";

    char dest_test [] = "XXXXXXXXXX";
    char src_test [] = "YYYYY";

    size_t len = 1;

    printf("Moi: %zu\n", ft_strlcat(dest, src, len));
    printf("VRAI: %zu\n", strlcat(dest_test, src_test, len));
    printf("\ndest_test : %s\n", dest_test);
    printf("dest      : %s\n", dest);
}