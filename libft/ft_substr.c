/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltromber <ltromber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:54:37 by ludovictrom       #+#    #+#             */
/*   Updated: 2021/12/06 15:19:53 by ltromber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	const char	*s2;
	int			i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (strdup(""));
	if (ft_strlen((char *)(s + start)) < len)
		len = ft_strlen((char *)(s + start));
	s2 = malloc(sizeof(char) * (len + 1));
	if (s2 == NULL)
		return ((char *) s2);
	if ((start > ft_strlen(s)))
		return ((char *) s2);
	while (len-- >= 1 && s[i])
	{
		((char *) s2)[i] = ((char *) s)[start];
		i++;
		start++;
	}
	((char *) s2)[i++] = 0;
	return ((char *) s2);
}

// int main(void)
// {
//     const char s[] = "i just want this part #############";
//     unsigned int start = 42;

//     size_t len = 42000000;
//     printf("RESULTAT:|%s|\n", ft_substr(s, start, len));
// }
