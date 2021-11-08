#include <string.h>
#include <stdio.h>
#include <unistd.h>

//#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len);

int main(void)
{
	char src[] = "12345";
	char dst[] = "6789";

	size_t len;
	len = 5;

	/* 
	printf("VRAI : %s\n\n", memmove(dsttest, srctest, len));
	printf("Source : %s\n", src);
	printf("Destination : %s\n\n", dst);
	printf("MOI : %s\n\n",ft_memmove(dst, src, len));
	 */
	ft_memmove(dst, src, len);
}
 
void *ft_memmove(void *dst, const void *src, size_t len)
{
	const char *tmp = src;
	char *dest = dst;

	int i;
	int j;

	i = 0;
	j = 0;

	while (len--)
	{
		if (tmp[j])
		{
			dest[i] = tmp[j];
			i++;
			j++;
		}
	}
	return (dest);
}