/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printphexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:20:24 by quenalla          #+#    #+#             */
/*   Updated: 2024/06/17 12:22:02 by quenalla         ###   ########.fr       */
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

int	ft_printphexa(unsigned int i)
{
	int	len;

	len = ft_len_hexa(i);
	if (i >= 16)
	{
		ft_printhexa(i / 16);
		ft_printhexa(i % 16);
	}
	else
	{
		if (i <= 9)
			ft_printchar(i + '0');
		else
			ft_printchar(i - 10 + 'a');
	}
	return (len);
}
