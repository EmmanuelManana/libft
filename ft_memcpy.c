/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 15:05:56 by emanana           #+#    #+#             */
/*   Updated: 2019/05/29 15:43:15 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *p_dst;
	unsigned char *p_src;

	p_src = (unsigned char*)src;
	p_dst = (unsigned char*)dst;
	while (0 < n)
	{
		*(p_dst++) = *(p_src++);
		n--;
	}
	return (p_dst);
}
