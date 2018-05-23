/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:55:28 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/23 19:50:20 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# define BUFF_SIZE 32

typedef struct	s_pm
{
	char		**cmd;

	int			*a;
	int			*b;
	int			alen;
	int			blen;
}				t_pm;


// main.c


// data_initialization.c
void			init_s(t_pm **s, int argc, char **argv);

/*
 * LIB
 */
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s);
char			*ft_strjoin_f(char const *s1, char const *s2, int j);
void			ft_putinttab(int *tab, int size, char *sp);
int				ft_atoi(const char *str);
int				*ft_intnew(size_t size, int value);
void			ft_put2str(char *str, char *strb);
void			ft_putchar(char c);
void			ft_putnbr(int n);
size_t			ft_strlen(const char *str);
void			ft_putstr(char const *s);
int				ft_strcmp(const char *s1, const char *s2);
int				intlen(int nb);




#endif
