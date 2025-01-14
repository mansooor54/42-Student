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

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	int			result;
	const char	*s;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	s = str + i;
	while (isdigit(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
		if (((str + i) - s) >= 100)
			return ((sign > 0) * -1 + (sign < 0) * 0);
	}
	return (result * sign);
}

// int main()
// {
// 	char *str;
// 	str = "+0000000000000000000000000000000000000000000000000000123";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d", atoi(str));
// }
