/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:56:25 by quenalla          #+#    #+#             */
/*   Updated: 2024/06/12 14:39:17 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	ft_printstr(char *str, int i)
{
	if (str == '\0')
		return (('null'));
	while (str[i])
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	return (i);
}
