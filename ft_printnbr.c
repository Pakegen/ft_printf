/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:54:24 by quenalla          #+#    #+#             */
/*   Updated: 2024/06/17 10:18:12 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	ft_strcount(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

int	ft_printnbr(int n)
{
	long int	nb;
	long int	compteur;
	int			len;

	nb = n;
	len = ft_strcount(n);
	compteur = 1;
	if (nb == 0)
		return (ft_printchar(n));
	if (nb < 0)
	{
		ft_printchar('-');
		nb = -nb;
	}
	while (compteur <= nb)
		compteur = compteur * 10;
	while (compteur != 1)
	{
		compteur = compteur / 10;
		ft_printchar(nb / compteur + '0');
		nb = nb % compteur;
	}
	return (len);
}
