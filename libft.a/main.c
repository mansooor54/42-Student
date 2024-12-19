/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:12:49 by malmarzo          #+#    #+#             */
/*   Updated: 2024/12/19 15:02:39 by malmarzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>  // لـ printf
#include <stdlib.h> // لـ malloc و free

//char	*ft_strjoin(char const *s1, char const *s2);
 
int	main(void)
{
	char	*str1;
	char	*str2;
	char	*result;

	// نصان لاختبار الدمج
	str1 = "Hello, ";
	str2 = "World!";
	// استدعاء الدالة
	result = ft_strjoin(str1, str2);
	// التحقق من الناتج
	if (result)
	{
		printf("Result: %s\n", result); // يجب أن يكون الناتج "Hello, World!"
		free(result);                   // تحرير الذاكرة المخصصة
	}
	else
	{
		printf("Error: Memory allocation failed.\n");
	}
	return (0);
}
