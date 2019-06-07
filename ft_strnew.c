/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:36:49 by emanana           #+#    #+#             */
/*   Updated: 2019/06/07 13:46:37 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char *str;
	size_t i;

	if (!(str = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	i = 0;
	while (str[i])
		str[i++] = '\0';
	return (str);
}
