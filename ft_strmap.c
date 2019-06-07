/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 14:38:16 by emanana           #+#    #+#             */
/*   Updated: 2019/06/07 14:03:34 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		i;

	i = 0;
	if (!(res = ft_strnew(ft_strlen(s) + 1)))
		return (NULL);
	if (!s || !f)
		return (NULL);
	while (s[i])
		res[i] = f(s[i]);
		i++;
	res[i] = '\0';
	return (res);
}
