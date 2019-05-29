/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 17:26:26 by emanana           #+#    #+#             */
/*   Updated: 2019/05/29 11:45:37 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	unsigned char *this;

	this = (unsigned char*)b;
	while (0 < len)
	{
		*(this++) = (unsigned char)c;
		len--;
	}
	return (this);
}
