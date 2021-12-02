/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:50:23 by ludovictrom       #+#    #+#             */
/*   Updated: 2021/12/02 10:58:43 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    int *ptr;
    int len;

    len = count * size;

    ptr = malloc(len);

    if (ptr == NULL)
        return (ptr);
    ft_memset(ptr, 0, len);
    return (ptr);
}

/* 
int main(void)
{
    size_t count = 5;
    size_t size = 2;

    int *ptr;

    ft_calloc(count, size);
} */
