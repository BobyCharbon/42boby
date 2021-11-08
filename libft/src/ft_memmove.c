#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

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