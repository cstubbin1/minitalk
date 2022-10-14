/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bblake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 08:29:24 by bblake            #+#    #+#             */
/*   Updated: 2022/03/04 09:48:10 by bblake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			index;
	const char	*temps;

	temps = s;
	index = ft_strlen(s);
	s = (s + index);
	while (*s != *temps && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
