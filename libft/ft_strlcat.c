#include <string.h>
#include <stdio.h>
#include <unistd.h>

//#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t destsize)
{
    size_t i;
    size_t j;
    size_t src_size;
    size_t dest_size;

    i = 0;
    

    src_size = strlen(src);
    dest_size = strlen(dest);
    j = destsize - src_size;

    if(!*dest || !*src || destsize < dest_size || destsize <= 0)
        return (src_size + destsize);
    while (j < (destsize) && i < src_size)
    {
        dest[j] = src[i];
        j++;
        i++;
    }
    dest[j] = 0;
    return (src_size + destsize);

    printf("DEST: %s\n", dest);
}

int main(void)
{
    char dest [] = "XXXXXXXXXXX";
    char src [] = "YYYYY";

    size_t destsize = 40;

    printf("Moi: %lu\n", ft_strlcat(dest, src, destsize));
    printf("VRAI: %lu\n", strlcat(dest, src, destsize));

}