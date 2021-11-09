#include <string.h>
#include <stdio.h>
#include <unistd.h>

//#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		src_size;

	src_size = ft_strlen((char *)src);
	if (!dst || !src || dstsize <= 0)
		return (src_size);
	i = 0;
	while (i < (dstsize - 1) && i < (size_t)src_size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_size);
}

int main(void)
{
    char src[] = "SalutHHHHH";
    char dst[] = "XXXXXLe rat";
    
    size_t size = 6;

/* 
    printf("VRAI : %s\n", strlcpy(dst, src, size));
    char src[] = "Salut ";
    char dst[] = "XXXXX Le rat";
    size_t size = 5;
 */
    printf("MOI : %s\n", ft_strlcpy(dst, src, size));
}