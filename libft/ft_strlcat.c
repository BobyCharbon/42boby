#include <string.h>
#include <stdio.h>
#include <unistd.h>

//#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;
    size_t src_size;
    size_t dest_size;

    i = 0;
    

    src_size = strlen(src);
    dest_size = strlen(dest);
    j = dstsize - src_size;

    if(!*dest || !*src || dstsize < dest_size || dstsize <= 0)
        return (src_size + dstsize);
    while (j < (dstsize) && i < src_size)
    {
        dest[j] = src[i];
        j++;
        i++;
    }
    dest[j] = 0;
    return (src_size + dest_size);
}

int main(void)
{
    char dest [] = "x";
    char src [] = "YYYYY";

    size_t dstsize = 50;

    printf("Moi: %lu\n", ft_strlcat(dest, src, dstsize));
    printf("VRAI: %lu\n", strlcat(dest, src, dstsize));

}