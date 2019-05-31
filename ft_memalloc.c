/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:08:14 by emanana           #+#    #+#             */
/*   Updated: 2019/05/31 15:06:18 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_memalloc(size_t size)
{
	void *mry;

	mry = malloc(size);
	if (!mry)
		return (NULL);
	ft_bzero(mry, size);
	return (mry);
}
