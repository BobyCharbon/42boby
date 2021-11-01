/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltromber <ltromber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:48:43 by ltromber          #+#    #+#             */
/*   Updated: 2021/11/01 14:38:08 by ltromber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_toupper(char *src, char *dest);

int main(void)
{
	char src[] = "Salut ca va ?";
	char dest[15];
	ft_toupper(src, dest);
	printf("SOURCE : %s\n",src);
	printf("DEST : %s\n",dest);
}

int	ft_toupper(char *src, char *dest)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(src[i])
	{
		if(src[i] >= 'a' && src[i] <= 'z')
		{
			src[i] = src[i] - 32;
			i++;
			j++;
		}
		else
		{
			i++;
			j++;
		}
		*dest = *src;
	}
	return (0);
}



/* 
char * strtoupper( char * dest, const char * src ) {
    char * result = dest;
    while(*dest++ == toupper(*src++));
    return result;
}

int main() {

    char * input = "Diego De La Vega";
    char result[17];

    printf( "Result: %s\n", strtoupper( result, input ) );

    return EXIT_SUCCESS;
}
 */

