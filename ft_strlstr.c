/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:34:36 by emanana           #+#    #+#             */
/*   Updated: 2019/05/28 10:49:02 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t d;
    size_t s;

    d = 0;
    s = 0;
    while (dst[d] && d < dstsize)
        d++;
    while ((src[s] && (d + s + 1) < dstsize))
    {
        dst[d + s] = src[s];
        s++;
    }
    if (d != dstsize)
        dst[d + s] = '\0';
    return (d + ft_strlen(src));
}
