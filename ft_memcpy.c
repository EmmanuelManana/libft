/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 15:05:56 by emanana           #+#    #+#             */
/*   Updated: 2019/06/06 18:28:56 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *p_dst;
	unsigned char *p_src;
	size_t i;

	i = 0;
	p_src = (unsigned char*)src;
	p_dst = (unsigned char*)dst;
	if (dst == NULL &&  src == NULL)
		return (NULL);
	while (i < n)
	{
		p_dst[i] = p_src[i];
		i++;
	}
	return (p_dst);
}
