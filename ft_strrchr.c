/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 16:04:03 by emanana           #+#    #+#             */
/*   Updated: 2019/06/07 11:20:30 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*l_pos;

	l_pos = (0);
	while (*s)
	{
		if (*s == c)
			l_pos = (char*)s;
		++s;
	}
	if (l_pos)
		return (l_pos);
	if (c == '\0')
		return ((char*)s);
	return (0);
}
