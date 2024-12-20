/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:55:33 by malmarzo          #+#    #+#             */
/*   Updated: 2024/12/19 10:55:35 by malmarzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

int main()
{
    char c1 = 'A';  // Uppercase letter
    char c2 = 'g';  // Lowercase letter
    char c3 = '5';  // Digit
    char c4 = '@';  // Special character

    printf("Is '%c' an alphabet? %d\n", c1, ft_isalpha(c1)); // Output: 1
    printf("Is '%c' an alphabet? %d\n", c2, ft_isalpha(c2)); // Output: 1
    printf("Is '%c' an alphabet? %d\n", c3, ft_isalpha(c3)); // Output: 0
    printf("Is '%c' an alphabet? %d\n", c4, ft_isalpha(c4)); // Output: 0

    return 0;
}
