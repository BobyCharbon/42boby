#include <string.h>
#include <stdio.h>
#include <unistd.h>

//#include "libft.h"

//void *ft_memmvoe(void *dst, const void *src, size_t len);

int main(void)
{
	char src[] = "Tema la taille xxxxxxxxxxxxxx";
	char dst[] = "du raph";

	size_t len;
	len = 10;
	printf("VRAI : %s\n", memmove(dst, src, len));
	//ft_memmvoe(dst, src, len);
}
/* 
void *ft_memmvoe(void *dst, const void *src, size_t len)
{

} */