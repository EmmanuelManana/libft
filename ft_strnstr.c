/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:21:51 by emanana           #+#    #+#             */
/*   Updated: 2019/05/28 16:49:24 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t n;

    if (!*needle)
        return ((char *)haystack);
	n = 0;
	while (*haystack && len)
	{
		if (*haystack == needle[n])
			n++;
		else
			n = 0;
		if (needle[n] == '\0')
			return ((char*)(haystack - n + 1));
		haystack++;
		len--;
	}
    return (NULL);
}
