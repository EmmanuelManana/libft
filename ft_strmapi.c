/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 15:51:49 by emanana           #+#    #+#             */
/*   Updated: 2019/06/06 15:15:56 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int			i;
	char		*returned;
	char		*src;

	i = 0;
	src = (char*)s;
	returned = ft_memalloc((size_t)(ft_strlen(s) + 1));
	if (!s || !*s || !src)
		return (NULL);
	while (src[i])
	{
		returned[i] = f(i, src[i]);
		i++;
	}
	return (returned);
}
