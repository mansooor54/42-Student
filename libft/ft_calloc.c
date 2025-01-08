/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:54:26 by malmarzo          #+#    #+#             */
/*   Updated: 2024/12/19 10:55:13 by malmarzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = (void *)malloc(nmemb * size);
	if (!(array))
		return (NULL);
	ft_bzero(array, (nmemb * size));
	return (array);
}

// int	main(void)
// {
// 	int	*arr;
// 	int	i;

// 	arr = (int *)ft_calloc(5, sizeof(int));
// 	i = 0;
// 	if (arr == NULL)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}
// 	while (i < 5)
// 	{
// 		printf("%d", arr[i]);
// 		i++;
// 	}
// 	free(arr);
// 	return (0);
// }
