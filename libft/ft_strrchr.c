/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:28:19 by ltromber          #+#    #+#             */
/*   Updated: 2021/11/09 22:19:54 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;

	while (str[i])
	{
		if (str[i] == c)
		{
			j = i;
		}
		i++;
	}
	return ((char*)str + j);
}
