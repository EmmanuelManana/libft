/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 13:42:37 by emanana           #+#    #+#             */
/*   Updated: 2019/05/24 15:46:01 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t h;
	size_t n;

	h = 0;
	n = 0;
	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	while (haystack[h] && h < len)
	{
		while ((needle[n] == haystack[h + n]) && n + h < len)
		{
			if (!needle[n])
			{
				return ((char*)haystack);
			}
			n++;
		}
		h++;
	}
	return (NULL);
}
