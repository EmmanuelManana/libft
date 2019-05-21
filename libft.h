/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:02:13 by emanana           #+#    #+#             */
/*   Updated: 2019/05/21 12:26:51 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H_
# define LIBFT_H_
# include <unistd.h>
# include <ctype.h>

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_strlen(char *str);
int			ft_atoi(char *str);
int			ft_isascii(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
void		ft_putchar(char c);
char		*ft_strcpy(char *dst, const char *src);
#endif
