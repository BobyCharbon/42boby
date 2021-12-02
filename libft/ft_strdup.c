/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltromber <ltromber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:52:34 by ludovictrom       #+#    #+#             */
/*   Updated: 2021/12/02 11:26:09 by ltromber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*str_duplicate;
	int		str_len;

	str_len = ft_strlen(str);
	str_duplicate = malloc(ft_strlen (str) + 1);
	if (!str_duplicate)
		return (NULL);
	ft_strlcpy(str_duplicate, str, *(size_t *) str);
	return (str_duplicate);
}

/* 
int main(void)
{
    char str[] = "I malloc so I am.";
    printf("str_duplicate: %s\n", str_duplicate);
    ft_strdup(str);
} */