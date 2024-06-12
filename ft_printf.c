/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:25:16 by quenalla          #+#    #+#             */
/*   Updated: 2024/06/12 16:04:04 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	ft_format(va_list args, char *str)
{
	char			*chaine;
	char			c;
	unsigned int	k;
	int				j;
	int				i;

	i = 0;
	chaine = va_arg(args, char *);
	k = va_arg(args, unsigned int);
	j = va_arg(args, int);
	c = va_arg(args, char);
	if (*str == 'c')
		ft_printchar(c, i);
	else if (*str == 's')
		ft_printstr(chaine, i);
	else if (*str == 'i' || *str == 'd')
		ft_printnbr(j, i);
	else if (*str == 'u')
		ft_printunsigned(k, i);
	else if (*str == 'x' || *str == 'X')
		ft_printhexa(args, i);
	else if (str == '%')
		ft_printstr(args, i);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	va_start(args, str);
	i = 0;
	while (*str)
	{
		if (*str++ == '%')
				i += ft_format(args, *++str);
		else
		{
			ft_putchar_fd(*str, 1);
			i++;
		}
	}
	va_end(args);
	return (i);
}
