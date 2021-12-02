/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltromber <ltromber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:54:13 by ludovictrom       #+#    #+#             */
/*   Updated: 2021/12/02 11:28:14 by ltromber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if ((!*str1 && !*str2) || n == 0)
		return (0);
	while ((str1[i] == str2[i]) && i < n - 1 && str1[i] && str2[i])
		i++;
	if (str1[i] != str2[i])
		return (((unsigned char *) str1)[i] - ((unsigned char *) str2)[i]);
	return (0);
}

/* 
int main(void)
{
    char str1[] = "atoms\0\0\0\0";
    char str2[] = "atoms\0abc";
    size_t n = 7;
    
    printf("VRAI: %d\n", strncmp(str1, str2, n));
    printf("Moi: %d\n", ft_strncmp(str1, str2, n));
}
 */