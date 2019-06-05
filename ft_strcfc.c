/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcfc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:20:34 by emanana           #+#    #+#             */
/*   Updated: 2019/06/05 12:32:19 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		ft_strcfc(char *str, const char *c)
{
	char			*p;
	unsigned int	cnt;
	int				ci;
	unsigned int	tmp;

	p = str;
	cnt = 0;
	while (*c)
	{
		ci = 0;
		tmp = cnt;
		while (c[ci])
		{
			if (c[ci++] == *p)
				++cnt;
		}
		if (cnt == tmp)
			return (cnt);
		++p;
	}
	return (cnt);
}