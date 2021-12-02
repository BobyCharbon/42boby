/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltromber <ltromber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 19:34:50 by ltromber          #+#    #+#             */
/*   Updated: 2021/12/02 11:12:39 by ltromber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int a)
{
	return (a >= 32 && a <= 126);
}

/* 
int main(void)
{
	int a;
	a = 'a';
	ft_isprint(a);
	printf("Résultat : %d", ft_isprint(a));
}
 */