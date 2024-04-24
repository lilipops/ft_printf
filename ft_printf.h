/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngurskiy <ngurskiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:25:26 by ngurskiy          #+#    #+#             */
/*   Updated: 2024/04/24 15:42:52 by ngurskiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

// Prints
int		ft_print_char(char c); // Print Character: %c
int		ft_print_str(char *str); // Print String: %s
int		ft_print_dec(int nb); // Print Decimal and Int: %d %i
int		ft_print_uns(unsigned int nb); // Print Unsigned: %u
int		ft_print_hex(unsigned long long nb, char c); // Print Hexadecimal: %x %X
int		ft_print_ptr(unsigned long long ptr); // Print Pointer: %p
// Printf
int		ft_printf(const char *format, ...); // Printf Prototype
// Utils
int		ft_countn(long long nb); // Count the amount of numb, (for print_dec)
void	ft_putnbr(int nb); // To print numbers on screen

#endif
