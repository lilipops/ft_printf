/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngurskiy <ngurskiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:24:27 by ngurskiy          #+#    #+#             */
/*   Updated: 2024/04/24 15:42:17 by ngurskiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countn(long long nb)
{
	int	i;

	i = 0;
	while (nb >= 10)
	{
		i++;
		nb /= 10;
	}
	return (i + 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_print_char('-');
		ft_print_char('2');
		n = 147483648;
	}
	if (n < 0)
	{
		ft_print_char('-');
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		ft_print_char(n + 48);
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

// POR FALTA DE ESPACIO:
int	ft_print_ptr(unsigned long long ptr)
{
	int	i;

	i = 0;
	i += ft_print_str("0x");
	i += ft_print_hex(ptr, 'x');
	return (i);
}
