/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcfc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:20:34 by emanana           #+#    #+#             */
/*   Updated: 2019/06/04 18:00:33 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		ft_strcfc(char *str, const char *c)
{
	char			*p;
	unsigned int	cnt;
	int				i;
	unsigned int	tmp;

	p = str;
	cnt = 0;
	while (*c)
	{
		i = 0;
		tmp = cnt;
		while (c[i])
		{
			if (c[i++] == *p)
				cnt++;
			if (cnt == tmp)
				return (cnt);
		}
		c++;
	}
	return (cnt);
}
