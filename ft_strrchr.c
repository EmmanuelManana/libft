/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 16:04:03 by emanana           #+#    #+#             */
/*   Updated: 2019/05/23 17:50:14 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int i;
	const char *res;

	i = 0;
	res = 0;
		while (*s)
		{
		if (*s == (char)c)
			res = s;
		s++;
	}
	return ((char*)res);
}
