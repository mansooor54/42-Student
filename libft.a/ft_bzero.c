/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:54:15 by malmarzo          #+#    #+#             */
/*   Updated: 2024/12/26 09:56:35 by malmarzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// int main()
// {
//     char buffer[10] = "Hello42!"; // Original buffer
//     // Print the initial buffer content
//     printf("Before ft_bzero: %s\n", buffer);
//     // Clear the first 5 bytes of the buffer
//     ft_bzero(buffer, 5);
//     // Print the buffer content after clearing
//     printf("After ft_bzero: ");
//     int i = 0; // Use while loop for printing
//     while (i < 10)
//     {
//         printf("%d ", buffer[i]); // Print ASCII value of each byte
//         i++;
//     }
//     printf("\n");
//     return ((0));
// }
