/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:22:07 by quenalla          #+#    #+#             */
/*   Updated: 2024/06/12 13:53:27 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	ft_printchar(va_list args, int i)
{
	i++;
	ft_putchar_fd(args, 1);
	return (i);
}