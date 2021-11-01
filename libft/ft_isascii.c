/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltromber <ltromber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:45:44 by ltromber          #+#    #+#             */
/*   Updated: 2021/10/29 19:33:54 by ltromber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isascii(int a);

int	main(void)
{
	int	a;

	a = 'c';
	ft_isascii(a);
}

int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
	{
		printf("True\n");
		//return (True);
		return (1);
	}
	printf("False\n");
	//return ("False");
	return (0);
}
