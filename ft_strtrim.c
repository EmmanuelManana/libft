/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:51:18 by emanana           #+#    #+#             */
/*   Updated: 2019/06/04 16:45:16 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char		*res;
	int			i;

	res = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s)
		return (NULL);
	if (res)
	{
		i = 0;
		while (*s)
		{
			if (*s != ' ' && *s != '\n' && *s != '\t' && *s != '\v')
				res[i++] = *s;
			s++;
		}
	}
	return (res);
}
