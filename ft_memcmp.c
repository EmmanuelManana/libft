/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 16:22:23 by emanana           #+#    #+#             */
/*   Updated: 2019/06/07 14:16:11 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char			*ps1;
	unsigned char			*ps2;
	size_t					i;

	i = 0;
	ps1 = (unsigned char*)s1;
	ps2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (ps1[i] != ps2[i])
			return ((int)(ps1[i] - ps2[i]));
		i++;
	}
	return (0);
}
