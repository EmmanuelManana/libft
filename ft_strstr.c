/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:46:45 by emanana           #+#    #+#             */
/*   Updated: 2019/06/06 15:53:31 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int h;
	unsigned int n;

	if (!*needle)
		return ((char*)haystack);
	h = 0;
	while (haystack[h] != '\0')
	{
		if (haystack[h] == needle[0])
		{
			n = 1;
			while (needle[n] != '\0' && haystack[h + n] == needle[n])
				++n;
			if (needle[n] == '\0')
				return ((char*)&haystack[h]);
		}
		++h;
	}
	return (0);
}
