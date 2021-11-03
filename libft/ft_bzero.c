/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingtringer <kingtringer@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:06:34 by ltromber          #+#    #+#             */
/*   Updated: 2021/11/03 19:44:09 by kingtringer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n);

int main(void)
{
	char s[] = "Salut";

	size_t n;
	n = 10;
	printf("VRAI : %s\n", bzero(s, n));
	//ft_bzero(s, n);
}
/* 
void	ft_bzero(void *s, size_t n)
{

}
 */
/* 
int main(void)
{
	char buffer[10];

	bzero (buffer,10);
	return 0;
}
 */