/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:56:00 by malmarzo          #+#    #+#             */
/*   Updated: 2024/12/26 10:16:16 by malmarzo         ###   ########.fr       */
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