/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingtringer <kingtringer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:45:44 by ltromber          #+#    #+#             */
/*   Updated: 2021/11/08 14:55:33 by kingtringer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_isascii(int a);

int	main(void)
{
	unsigned char c = 'c';
	//ft_isascii(c);
	if (ft_isascii(c) == 0)
	{
			printf("False\n");
	}
	else
		printf("True\n");
}

int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
		return (1);
	else
		return (0);
}
