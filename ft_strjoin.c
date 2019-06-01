/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 14:25:40 by emanana           #+#    #+#             */
/*   Updated: 2019/06/01 15:21:31 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char *returned;
	size_t len;

	if (s1 && s2)
		len = (size_t)(ft_strlen(s1) + ft_strlen(s2));
	else if (s1)
		len = (size_t)(ft_strlen(s1));
	else if (s2)
		len = (size_t)(ft_strlen(s2));
	else
		return (NULL);
	if (!(returned = ft_memalloc(len)))
	   return (NULL);
	if (s1)
		returned = ft_strcpy(returned, (char*)s1);
	else (s2)
		returned = ft_strcpy(returned, (char*)s2);
	else if (s1 && s2)
		returned = ft_strcat(result, (char*)s2);
	return (returned);
}
