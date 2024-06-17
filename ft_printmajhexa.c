/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmajhexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:55:30 by quenalla          #+#    #+#             */
/*   Updated: 2024/06/17 09:36:20 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	ft_len_hexa(int i)
{
	int	len;

	len = 0;
	while (i > 1)
	{
		len++;
		i = i / 16;
	}
	return (len);
}

int	ft_printmajhexa(int i)
{
	int	len;

	len = ft_len_hexa(i);
	if (i >= 16)
	{
		ft_printmajhexa(i / 16);
		ft_printmajhexa(i % 16);
	}
	else
	{
		if (i <= 9)
			ft_putchar_fd(i + '0', 1);
		else
			ft_putchar_fd(i - 10 + 'A', 1);
	}
	return (len);
}
