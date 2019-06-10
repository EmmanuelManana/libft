/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:46:45 by emanana           #+#    #+#             */
/*   Updated: 2019/06/10 15:47:24 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			cmp(const char *haystack, const char *needle)
{
	while (*haystack && *needle)
	{
		if (*haystack != *needle)
			return (0);
		haystack++;
		needle++;
	}
	return (*needle == '\0');
}

char				*ft_strstr(const char *haystack, const char *needle)
{
	if (*needle == '\0' || needle == NULL)
		return ((char*)haystack);
	while (*haystack != '\0')
	{
		if (*haystack == *needle && cmp((char*)haystack, (char*)needle))
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
