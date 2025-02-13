/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:42:48 by malmarzo          #+#    #+#             */
/*   Updated: 2025/02/13 10:05:04 by malmarzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int ft_parse_format(char c, va_list args)
{
    if (c == 'c')
        return (ft_print_char(va_arg(args, int)));
    else if (c == 's')
        return (ft_print_string(va_arg(args, char *)));
    else if (c == 'd' || c == 'i')
        return (ft_print_int(va_arg(args, int)));
    else if (c == 'u')
        return (ft_print_unsigned(va_arg(args, unsigned int)));
    else if (c == 'x')
        return (ft_print_hex(va_arg(args, unsigned int), 0));
    else if (c == 'X')
        return (ft_print_hex(va_arg(args, unsigned int), 1));
    else if (c == '%')
		return (ft_print_char('%'));
	else
		return (0);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int i;
    int count;

    i = 0;
    count = 0;
    va_start(args, format);
    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            count += ft_parse_format(format[i], args);
        }
        else
        {
            count += ft_print_char(format[i]);
        }
        i++;
    }
    va_end(args);
    return (count);
}

// int main(void)
// {
//     int i;
    
//     i = 0;
//     ft_printf("Hello, %s! %c %d %i %u %x %X\n", "world", 'A', -42, -42, 42, 42, 42);
//     ft_printf("NULL string test: %s\n", (char *)NULL);
//     return (0);
// }
