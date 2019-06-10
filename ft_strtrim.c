/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 18:12:50 by emanana           #+#    #+#             */
/*   Updated: 2019/06/10 18:18:00 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*result;
	unsigned int	start;
	unsigned int	size;
	unsigned int	spaces_count;

	if (!s)
		return (NULL);
	size = (unsigned int)ft_strlen((char*)s);
	spaces_count = ft_cntfirstchar((char*)s, " \n\t");
	start = spaces_count;
	if (size > spaces_count)
		spaces_count += ft_cntlastchar((char*)s, " \n\t");
	size -= spaces_count;
	if (!(result = ft_memalloc((size_t)size + 1)))
		return (NULL);
	result = ft_strncpy(result, (char*)s + start, size);
	return (result);
}
