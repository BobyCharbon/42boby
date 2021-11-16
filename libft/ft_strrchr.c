/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:28:19 by ltromber          #+#    #+#             */
/*   Updated: 2021/11/16 16:33:03 by ludovictrom      ###   ########.fr       */
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
	
	i = 0;
	j = 0;
	
	if (!str[i])
		return (NULL);
	while (str[i])
	{
		if (str[i] == (char) c)
		{
			j = i;
		}
		i++;
	}
	if ((char) c == '\0')
		return ((char*) str + i);
	if (!j)
		return (NULL);
	return ((char *)str + j);
}

int main(void)
{
	char chaine[] = "īœ˙ˀ˘¯ˇ¸¯.œ«‘––™ª•¡¶¢˜ˀ";

	char c = "¯";
	printf("VRAI : %s\n\n", strrchr(chaine, c));
	printf("MOI : %s\n", ft_strrchr(chaine, c));
}