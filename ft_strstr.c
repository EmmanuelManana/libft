/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:46:45 by emanana           #+#    #+#             */
/*   Updated: 2019/05/28 16:23:46 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		cmp(const char *haystack, const char *needle)
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

char		*ft_strstr(const char *haystack, const char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle && cmp((char*)haystack,(char*)needle))
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
