/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:54:01 by malmarzo          #+#    #+#             */
/*   Updated: 2025/01/13 12:39:28 by malmarzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		if ((result * 10) <= result)
		{
			if (sign > 0)
				return (-1);
			else
				return (0);
		}
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

//  int main()
//  {
// 	 char *str = "			   000000000018446744073709551615";
// 	 printf("%d\n", ft_atoi(str));
// 	 printf("%d\n", atoi(str));
// 	 return 0;
//  }