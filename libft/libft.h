/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltromber <ltromber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:51:42 by ltromber          #+#    #+#             */
/*   Updated: 2021/11/01 15:54:14 by ltromber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_strchr(int c);
int		ft_strlen(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_memset(void *ptr, int val, size_t len);