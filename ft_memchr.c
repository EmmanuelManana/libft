/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:41:55 by emanana           #+#    #+#             */
/*   Updated: 2019/05/30 15:56:38 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *p_s;

	p_s = (unsigned char*)s;
	while (0 < n)
	{
		if (*p_s == (unsigned char)c)
			return ((void*)p_s);
		n--;
		p_s++;
	}
	return (NULL);
}
