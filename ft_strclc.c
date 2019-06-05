/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:05:16 by emanana           #+#    #+#             */
/*   Updated: 2019/06/05 12:18:45 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		ft_strclc(char *str, const char *c)
{
	int				c_i;
	unsigned int	str_i;
	unsigned int	cnt;
	unsigned int	tmp;

	cnt = 0;
	str_i = (unsigned int)ft_strlen(str) - 1;
	while (str[str_i])
	{
		c_i = 0;
		tmp = cnt;
		while (c[c_i])
		{
			if (c[c_i] == str[str_i])
				++cnt;	
		}
		if (cnt == tmp)
			return (cnt);
		--str_i;
	}
	return (cnt);
}
