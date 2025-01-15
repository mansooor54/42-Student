/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:01:16 by malmarzo          #+#    #+#             */
/*   Updated: 2025/01/09 11:01:16 by malmarzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_memory(char **str, int index)
{
	int	i;

	i = 0;
	while (i <= index)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static int	count_word(char const *str, char c)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] == c)
			i++;
		if (str[i] != '\0')
			word_count++;
		while (str[i] != '\0' && str[i] != c)
			i++;
	}
	return (word_count);
}

static int	word_strlen(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

static char	*allocate_word(char const *str, char c)
{
	int		i;
	int		word_len;
	char	*final;

	word_len = word_strlen(str, c);
	final = (char *)malloc(sizeof(char) * (word_len + 1));
	if (!final)
		return (NULL);
	i = 0;
	while (i < word_len)
	{
		final[i] = str[i];
		i++;
	}
	final[i] = '\0';
	return (final);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**arr;

	arr = (char **)ft_calloc((count_word(s, c) + 1), sizeof(char *));
	i = 0;
	if (arr == NULL || s == NULL)
		return (NULL);
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			arr[i] = allocate_word(s, c);
			if (arr[i] == NULL)
			{
				free_memory(arr, i);
				return (NULL);
			}
			i++;
		}
		while (*s != '\0' && *s != c)
			s++;
	}
	return (arr);
}

// int main()
// {
// 	char *str = "Mansoor Abdullah Almarzoqi";
// 	char **arr = ft_split(str, ' ');
// 	int i = 0;
// 	while (arr[i] != NULL)
// 	{
// 		printf("%s\n", arr[i]);
// 		i++;
// 	}
// 	return 0;
// }
