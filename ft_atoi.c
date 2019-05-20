/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:21:59 by emanana           #+#    #+#             */
/*   Updated: 2019/05/20 16:39:42 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int res;
	int sign;
	int i;

	sign = 1;
	i = 0;
	res = 0;
	while (str[i] && 
			(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f' || str[i] == '\v'))
		i++;
	if (*str++ == '-')
		sign = -1 * sign;
	if (*str == '-' || *str == '+')
		str++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
		res = (res * 10) + (str[i] - '0');
		i++;
	return (res * sign);
}
