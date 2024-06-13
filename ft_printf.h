/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:39:56 by quenalla          #+#    #+#             */
/*   Updated: 2024/06/13 11:21:03 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include<stddef.h>
# include<unistd.h>
# include<stdio.h>
# include<stdlib.h>
# include<stdarg.h>

int		ft_printf(const char *str, ...);

int		ft_printchar(char c);

void	ft_putchar_fd(char c, int fd);

#endif
