/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:39:56 by quenalla          #+#    #+#             */
/*   Updated: 2024/06/17 12:23:08 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stddef.h>
# include<unistd.h>
# include<stdio.h>
# include<stdlib.h>
# include<stdarg.h>

int		ft_printf(const char *str, ...);

int		ft_printchar(char c);

int		ft_printnbr(int n);

int		ft_printunsigned(unsigned int n);

int		ft_printstr(char *str);

int		ft_printmajhexa(int i);

int		ft_printhexa(int i);

int		ft_printphexa(unsigned int i);

#endif
