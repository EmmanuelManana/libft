/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 14:38:16 by emanana           #+#    #+#             */
/*   Updated: 2019/06/06 15:04:25 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*returned;
	char	*src;

	src = (char*)s;
	if (!s || !(returned = ft_memalloc((size_t)ft_strlen((const char*)s) + 1)))
		return (NULL);
	while (*src)
		*(returned++) = f(*(src++));
	return (returned);
}
