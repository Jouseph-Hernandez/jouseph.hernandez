/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:33:35 by joushern          #+#    #+#             */
/*   Updated: 2024/01/31 23:13:05 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	how_many_words(char const *s, char c)
{
	size_t	words;
	size_t	s_len;

	words = 0;
	s_len = 0;
	while (s[s_len])
	{
		if (s[s_len] != c && (s[s_len + 1] == c || s[s_len + 1] == '\0'))
			words++;
		s_len++;
	}
	return (words);
}

static char	**free_on_error(size_t i, char **arr)
{
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static char	**create_matrix(char const *s, char **arr, char c, size_t s_len)
{
	size_t	start;
	size_t	i;

	start = 0;
	i = 0;
	while (s[s_len])
	{
		if (s[s_len] == c && s[s_len + 1] != c)
			start = 1 + s_len;
		if (s[s_len] != c && (s[s_len + 1] == c || s[s_len + 1] == '\0'))
		{
			if (s[start] != c && s[s_len] != c)
			{
				arr[i] = ft_substr(s, start, (s_len - start + 1));
				if (!arr[i])
					return (free_on_error(0, arr));
				i++;
			}
		}
		s_len++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char		**arr;
	size_t		s_len;
	size_t		words;

	s_len = 0;
	if (!s)
		return (NULL);
	words = how_many_words(s, c);
	arr = (char **)ft_calloc(words + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	arr = create_matrix(s, arr, c, s_len);
	return (arr);
}
/*
int	main(void)
{
	char s[100] = ",,andres,,,,pedro,,juan";
	char c = ',';

	ft_split(s,c);
	return (0);
}*/
