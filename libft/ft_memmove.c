#include <string.h>
#include <stdio.h>
#include <unistd.h>

//#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len);

int main(void)
{
	char src[] = "Tema la taille";
	char dst[] = "du le raph";

	size_t len;
	len = 5;
	printf("VRAI : %s\n", memmove(dst, src, len));
	printf("MOI : %s\n",ft_memmove(dst, src, len));
}
 
void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *dest;
	const char *s;

	size_t i;

	s = src;
	char tmp[500 * sizeof(s)];


	dest = dst;
	i = 0;

while (s[i] || len--)
	{
		tmp[i] = s[i];
		i++; 
	}
	
	return (dst);
}