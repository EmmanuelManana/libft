/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 17:33:45 by emanana           #+#    #+#             */
/*   Updated: 2019/06/05 17:41:19 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*node;
	i(!(node = (t_list*)malloc(sizeof(t_list) * 1)))
		return ;
	node = *alst;
	while (node->next)
	{
		ft_lstdelone(&node, del);
	}
	*alst = NULL;
}
