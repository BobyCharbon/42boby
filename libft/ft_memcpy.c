/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltromber <ltromber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:51:36 by ludovictrom       #+#    #+#             */
/*   Updated: 2021/12/02 11:21:35 by ltromber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (dest);
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}

/* 
int main(void)
{
    char src[] = "YYYYYYYY";
    char src_test[] = "YYYYYYYY";
    char dest[] = "XXXXXXXX";
    char dest_test[] = "XXXXXXXX";
    size_t n;
    

    n = 10;
    printf("VRAI : %s\n", memcpy(dest_test, src_test, n));
    printf("MOI : %s\n", ft_memcpy(dest, src, n));
} */