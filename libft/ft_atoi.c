/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:39:05 by malmarzo          #+#    #+#             */
/*   Updated: 2025/01/15 10:39:05 by malmarzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	result;
	int					digit;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
		if (str[i++] == '-')
			sign = sign * -1;
	while (str[i] == '0')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i++] - '0');
		digit++;
	}
	if (result >= __LONG_LONG_MAX__ || digit > 19)
		return (-(sign == 1));
	return (result * sign);
}

int	main(void)
{
	char *str = "      -0000000001212000021222456789";
	printf("the numbers are %d\n", atoi(str));
	printf("the numbers are %d\n", ft_atoi(str));
}
