/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:39:56 by quenalla          #+#    #+#             */
/*   Updated: 2024/06/12 14:27:14 by quenalla         ###   ########.fr       */
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

int		ft_printchar(va_list args, int i);

void	ft_putchar_fd(char c, int fd);

#endif
