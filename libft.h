/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:02:13 by emanana           #+#    #+#             */
/*   Updated: 2019/05/22 16:28:45 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <ctype.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_isalnum(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
void		ft_putchar(char c);
void		ft_putnbr(int n);
void		ft_putstr(char *str);
int			ft_atoi(const char *str);
int			ft_strlen(const char *str);
char		*ft_strdup(const char *s1);
char		*ft_strcpy(char *dst, const char *src);
int			ft_strcmp(const char *s0, const char *s2);
char		*ft_strncpy(char *dst, const char* src, size_t len);

#endif
