/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 14:38:16 by emanana           #+#    #+#             */
/*   Updated: 2019/06/07 16:11:50 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(res = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i])
	{
		res[i] = f((char)s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
