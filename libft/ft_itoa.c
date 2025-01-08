/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:56:06 by malmarzo          #+#    #+#             */
/*   Updated: 2024/12/19 10:56:08 by malmarzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_char(char *s, unsigned int number, long int len)
{
	while (number > 0)
	{
		s[len--] = 48 + (number % 10);
		number = number / 10;
	}
	return (s);
}

static long int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char				*s;
	long int			len;
	unsigned int		number;
	int					sign;

	sign = 1;
	len = ft_len(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!(s))
		return (NULL);
	s[len--] = '\0';
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		number = n * -1;
		s[0] = '-';
	}
	else
		number = n;
	s = ft_char(s, number, len);
	return (s);
}

// int	main(void)
// {
// 	int		numbers[] = {0, -123, 456, -2147483648, 2147483647};
// 	int		i;
// 	char	*result;

// 	i = 0;
// 	printf("Testing ft_itoa:\n");
// 	while (i < 5)
// 	{
// 		result = ft_itoa(numbers[i]);
// 		if (result)
// 		{
// 			printf("Number: %d -> String: %s\n", numbers[i], result);
// 			free(result);
// 		}
// 		else
// 		{
// 			printf("Memory allocation failed for number: %d\n", numbers[i]);
// 		}
// 		i++;
// 	}
// 	return (0);
// }
