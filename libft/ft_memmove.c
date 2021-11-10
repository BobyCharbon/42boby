#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{

	int i;
	int j;

	i = 0;
	j = 0;

	if (src > dest)
		return (ft_memcpy(dest, src, n));
	
	while (n--)
	{
		*(char*)(dest + i) = *(char*)(src + i);
		i++;
	}
	return (dest);
}

int main(void)
{
	char dest[] = "Coucou toi";
	char src[] = "T bo";

	size_t n = 10;
	printf("Moi: %s\n", ft_memmove(dest, src, n));
}