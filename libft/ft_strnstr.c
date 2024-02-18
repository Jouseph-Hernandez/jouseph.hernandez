/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:45:59 by joushern          #+#    #+#             */
/*   Updated: 2024/01/27 18:39:13 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystk, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	char	*hay;
	char	*needl;

	hay = (char *)haystk;
	needl = (char *)needle;
	i = 0;
	if (needl[0] == '\0')
		return ((char *)haystk);
	while (hay[i] && i < n)
	{
		j = 0;
		while (hay[i + j] == needl[j] && (i + j) < n)
		{
			if (!needl[j + 1])
				return ((char *)haystk + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
