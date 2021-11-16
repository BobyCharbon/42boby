/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:28:19 by ltromber          #+#    #+#             */
/*   Updated: 2021/11/16 16:42:15 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned int	i;
	unsigned int	j;
	size_t str_size;
	i = 0;
	j = 0;
	
	str_size = strlen(str);
	i = str_size;
	if (!str[i])
		return (NULL);
	while (str_size--)
	{
		if (((char*) str)[i] == (char) c)
			return ((char*) str + i);
		i--;
	}
	if ((char) c == '\0')
		return ((char*) str + i);
	if (!i)
		return (NULL);
	return ((char *)str + i);
}
/* 
int main(void)
{
	char chaine[] = "Salut le rat";

	char c = 'l';
	printf("VRAI : %s\n\n", strrchr(chaine, c));
	printf("MOI : %s\n", ft_strrchr(chaine, c));
} */