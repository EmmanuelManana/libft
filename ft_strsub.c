/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 12:35:53 by emanana           #+#    #+#             */
/*   Updated: 2019/06/01 15:14:19 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *res;
	
	if (!s || !(res = ft_memalloc(len + 1))
		return (NULL);
	res = ft_strncpy(res, (char*)s + start, len);
	return (res);
}
