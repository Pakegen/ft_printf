/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:54:24 by quenalla          #+#    #+#             */
/*   Updated: 2024/06/13 15:08:34 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	ft_printnbr(int n)
{
	long long int	nb;
	long long int	compteur;
	long long int	len;

	nb = n;
	len = 1;
	if (nb == 0)
		return (ft_printchar(n));
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	while (compteur < nb)
	{
		if (compteur != nb)
			len++;
		compteur = compteur * 10;
	}
	while ((compteur / 10) != 1)
	{
		ft_putchar(nb / compteur + '0');
		nb = nb % compteur;
	}
	return (len);
}
