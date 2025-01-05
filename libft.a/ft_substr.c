/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:59:54 by malmarzo          #+#    #+#             */
/*   Updated: 2024/12/19 10:59:55 by malmarzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;
	size_t	finish;

	if (!str)
		return (0);
	slen = ft_strlen(str);
	finish = 0;
	if (start < slen)
		finish = slen - start;
	if (finish > len)
		finish = len;
	new = (char *)malloc(sizeof(char) * (finish + 1));
	if (!new)
		return (0);
	ft_strlcpy(new, str + start, finish + 1);
	return (new);
}

// int main()
// {
//     char str[] = "Hello, 42 School!";
//     char *substr;

//     // Extract substring starting at index 7, with max length 5
//     substr = ft_substr(str, 7, 5);

//     if (substr)
//     {
//         printf("Original string: %s\n", str);
//         printf("Extracted substring: %s\n", substr);
//         free(substr); // Free allocated memory
//     }
//     else
//     {
//         printf("Memory allocation failed or invalid input.\n");
//     }

//     return 0;
// }