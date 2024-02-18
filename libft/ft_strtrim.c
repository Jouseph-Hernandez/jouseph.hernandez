/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 21:25:34 by joushern          #+#    #+#             */
/*   Updated: 2024/01/28 22:32:31 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	found(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] && set[i] != c)
		i++;
	if (set[i] == c)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim_str;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && found(s1[start], set) == 1)
		start++;
	while (found(s1[end], set) == 1 && end > start)
		end--;
	return (trim_str = ft_substr(s1, start, (end - start + 1)));
}
/*
int	main (void)
{
	char	s1[13] = "aaabananaaaa";
	char	set[4] = "aaa";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}*/
