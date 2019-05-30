/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 17:18:01 by emanana           #+#    #+#             */
/*   Updated: 2019/05/30 11:31:36 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;
	
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	while(0 < len)
	{
		*(d++) = *(s++);
		len--;
	}
	return (d);
}
