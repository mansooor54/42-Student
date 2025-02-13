/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:32:41 by malmarzo          #+#    #+#             */
/*   Updated: 2025/02/06 11:47:57 by malmarzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int ft_printf(const char *format, ...);
int ft_parse_format(char c, va_list args);
int ft_print_char(int c);
int ft_print_string(char *s);
int ft_print_int(int n);
int ft_print_unsigned(unsigned int n);
int ft_print_hex(unsigned int n, int upper);

#endif
