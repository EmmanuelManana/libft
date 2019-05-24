/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:46:45 by emanana           #+#    #+#             */
/*   Updated: 2019/05/24 15:43:09 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	int n;

	n = 0;
	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	while (*haystack)
	{
		n = 0;
		while (haystack[n] == needle[n])
		{
			if (!needle[n])
			{
				return ((char*)haystack);
			}
			n++;
		}
		haystack++;
	}
	return (NULL);
}
