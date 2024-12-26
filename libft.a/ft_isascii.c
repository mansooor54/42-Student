/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:55:42 by malmarzo          #+#    #+#             */
/*   Updated: 2024/12/26 10:13:39 by malmarzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main()
// {
//     int test1 = 'A'; // ASCII value: 65
//     int test2 = 128; // Outside ASCII range
//     int test3 = 0;   // Boundary case
//     int test4 = -1;  // Outside ASCII range

//     printf("Is %d ASCII? %d\n", test1, ft_isascii(test1)); // Output: 1
//     printf("Is %d ASCII? %d\n", test2, ft_isascii(test2)); // Output: 0
//     printf("Is %d ASCII? %d\n", test3, ft_isascii(test3)); // Output: 1
//     printf("Is %d ASCII? %d\n", test4, ft_isascii(test4)); // Output: 0

//     return (0);
// }