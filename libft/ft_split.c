/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 09:26:43 by malmarzo          #+#    #+#             */
/*   Updated: 2025/01/16 09:26:43 by malmarzo         ###   ########.fr       */
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

static char	*new_word(char const *str, char c)
{
	int		i;
	int		word_len;
	char	*the_word;

	word_len = word_strlen(str, c);
	the_word = (char *)malloc(sizeof(char) * (word_len + 1));
	if (!the_word)
		return (NULL);
	i = 0;
	while (i < word_len)
	{
		the_word[i] = str[i];
		i++;
	}
	the_word[i] = '\0';
	return (the_word);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	char	**new_array;

	i = 0;
	new_array = (char **)ft_calloc((count_word(s, c) + 1), sizeof(char *));
	if (new_array == NULL || s == NULL)
		return (NULL);
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			new_array[i] = new_word(s, c);
			if (new_array[i] == NULL)
			{
				free_memory(new_array, i);
				return (NULL);
			}
			i++;
		}
		while (*s != '\0' && *s != c)
			s++;
	}
	return (new_array);
}
