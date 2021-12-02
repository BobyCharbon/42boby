/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltromber <ltromber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:52:17 by ludovictrom       #+#    #+#             */
/*   Updated: 2021/12/02 11:24:10 by ltromber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!fd || !s)
		return (0);
	while (((char *)s)[i])
	{
		write(fd, s + i, 1);
		i++;
	}
}

/* 
int main(void)
{
    char s[] = "Salut";
    // printf("RESULTAT: |%s|\n", ft_putstr_fd(s));
    ft_putstr_fd(s);
} */