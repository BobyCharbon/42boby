/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingtringer <kingtringer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:18:58 by fvarrin           #+#    #+#             */
/*   Updated: 2021/11/08 14:35:40 by kingtringer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		src_size;

	src_size = ft_strlen((char *)src);
	if (!dst || !src || dstsize <= 0)
		return (src_size);
	i = 0;
	while (i < (dstsize - 1) && i < (size_t)src_size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_size);
}
