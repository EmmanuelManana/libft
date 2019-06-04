/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:51:18 by emanana           #+#    #+#             */
/*   Updated: 2019/06/04 18:02:55 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char			*res;
	unsigned int	start;
	unsigned int	size;
	unsigned int	sp_count;

	if (!s)
		return (NULL);
	size = (unsigned int)ft_strlen(s);
	sp_count = ft_strcfc((char*)s, "\t\n ");
	start = sp_count;
	if (size > sp_count)
		sp_count += ft_strclc((char*)s, "\t\n ");
	size -= sp_count;
	if (!(res = ft_memalloc((size_t)size + 1)))
		return (NULL);
	res = ft_strncpy(result, (char*)s + start, size);
	return (res);
}
