/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:52:25 by emanana           #+#    #+#             */
/*   Updated: 2019/06/01 15:10:00 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	size_t n = 10;
	int cmp;
	int cmp1;

	cmp = ft_strnequ("hello", "hello", ft_strlen("hello"));
	cmp1 = ft_strncmp("hello", "hello", ft_strlen("hello"));

	printf("%i\n", cmp);
	printf("%i", cmp1);
	return (0);
}
