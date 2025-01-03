/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:56:00 by malmarzo          #+#    #+#             */
/*   Updated: 2024/12/26 13:53:55 by malmarzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char test_chars[] = {'A', ' ', '\n', 127, '9', '~'};
// 	int num_chars = sizeof(test_chars) / sizeof(test_chars[0]);

// 	printf("Testing ft_isprint function:\n");

// 	for (int i = 0; i < num_chars; i++)
// 	{
// 		char c = test_chars[i];
// 		printf("Character: '%c' (ASCII: %d) -> ft_isprint: %d\n", (c >= 32
// 				&& c <= 126) ? c : '.', c, ft_isprint(c));
// 	}

// 	return (0);
// }

// Explanation of ft_isprint
// The ft_isprint function is a custom implementation that checks
//     whether a given character is a printable character. It works as follows:

// The isprint() function tests for any printing character, including space
//   (` ').  The value of the argument must be representable as an unsigned
//      char or the value of EOF.

//      In the ASCII character set, this includes the following characters (pre-
//      ceded by their numeric values, in octal):

// Input: An integer c, typically representing a character in ASCII.
// Condition: Checks if c is within the printable range of ASCII 
//    characters, which are:
// From 32 (space ' ') to 126 (tilde '~').
// Output:
// Returns 1 (true) if c is printable.
// Returns 0 (false) otherwise.
// This function mimics the behavior of the standard 
//     C library function isprint()