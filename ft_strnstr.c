/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:21:51 by emanana           #+#    #+#             */
/*   Updated: 2019/06/06 15:31:33 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	h;
	unsigned int	n;

	if (!*needle)
		return ((char*)haystack);
	h = 0;
	while (haystack[h] != '\0' && (size_t)h < len)
	{
		if (haystack[h] == needle[0])
		{
			n = 1;
			while (needle[n] != '\0' && haystack[h + n] == needle[n] &&
					(size_t)(h + n) < len)
				++n;
			if (needle[n] == '\0')
				return ((char*)&haystack[n]);
		}
		++h;
	}
	return (0);
}
