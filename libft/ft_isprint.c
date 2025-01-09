/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:49:46 by malmarzo          #+#    #+#             */
/*   Updated: 2025/01/09 12:49:46 by malmarzo         ###   ########.fr       */
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
// 	char test_chars[] = {'B', ' ', '\n', 127, '9', '~'};
// 	int num_chars;
// 	int i;

// 	num_chars = sizeof(test_chars) / sizeof(test_chars[0]);
// 	i = 0;
// 	printf("Testing ft_isprint function:\n");
// 	while (i < num_chars)
// 	{
// 		if (test_chars[i] >= 32 && test_chars[i] <= 126)
// 			printf("Character: '%c' (ASCII: %d) -> ft_isprint: %d\n",
// 				test_chars[i], test_chars[i], ft_isprint(test_chars[i]));
// 		else
// 			printf("Character: '.' (ASCII: %d) -> ft_isprint: %d\n",
// 				test_chars[i], ft_isprint(test_chars[i]));
// 		i++;
// 	}
// 	return (0);
// }
//========================================================
// Explanation of ft_isprint
// The ft_isprint function is a custom implementation that checks
//     whether a given character is a printable character. It works as follows:

// The isprint() function tests for any printing character, including space
//   (` ').  The value of the argument must be representable as an unsigned
//      char or the value of EOF.

//      In the ASCII character set,
//	this includes the following characters (pre-
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