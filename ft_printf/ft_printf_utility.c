/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utility.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:14:53 by malmarzo          #+#    #+#             */
/*   Updated: 2025/02/13 09:46:19 by malmarzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_char(int c)
{
    write(1, &c, 1);
    return (1);
}

int ft_print_string(char *s)
{
    int i;

    if (!s)
        return (write(1, "(null)", 6));
    i = 0;
    while (s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
    return (i);
}

int ft_print_int(int n)
{
    int count;
    char c;

    count = 0;
    if (n == -2147483648)
        return (write(1, "-2147483648", 11));
    if (n < 0)
    {
        write(1, "-", 1);
        count++;
        n = -n;
    }
    if (n >= 10)
    {
        count += ft_print_int(n / 10);
        count += ft_print_int(n % 10);
    }
    else
    {
        c = '0' + n;
        write(1, &c, 1);
        count++;
    }
    return (count);
}

int ft_print_unsigned(unsigned int n)
{
    int count;
    char c;

    count = 0;
    if (n >= 10)
    {
        count += ft_print_unsigned(n / 10);
        count += ft_print_unsigned(n % 10);
    }
    else
    {
        c = '0' + n;
        write(1, &c, 1);
        count++;
    }
    return (count);
}

int ft_print_hex(unsigned int n, int upper)
{
    int count;
    char *hex;

    count = 0;
    if (upper)
        hex = "0123456789ABCDEF";
    else
        hex = "0123456789abcdef";
    if (n >= 16)
    {
        count += ft_print_hex(n / 16, upper);
        count += ft_print_hex(n % 16, upper);
    }
    else
    {
        write(1, &hex[n], 1);
        count++;
    }
    return (count);
}