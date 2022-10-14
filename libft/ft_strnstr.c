/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bblake <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 09:18:17 by bblake            #+#    #+#             */
/*   Updated: 2022/03/04 09:47:46 by bblake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hay;
	size_t	n;

	hay = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[hay])
	{
		n = 0;
		while (haystack[hay + n] == needle[n] && (hay + n) < len)
		{
			if (!haystack[hay + n] && !needle[hay])
				return ((char *)&haystack[hay]);
			n++;
		}
		if (!needle[n])
			return ((char *)haystack + hay);
		hay++;
	}
	return (0);
}
