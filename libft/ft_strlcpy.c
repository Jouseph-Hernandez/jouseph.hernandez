/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:00:07 by joushern          #+#    #+#             */
/*   Updated: 2024/01/28 16:15:33 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*dest;
	char		*source;
	size_t		i;

	dest = dst;
	source = (char *)src;
	i = 0;
	if (dstsize != 0)
	{
		while (i < dstsize - 1 && src[i])
		{
			dest[i] = source[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char		dst[10] = "EMPANADA";
	char		dst1[10] = "EMPANADA";
	char const	src[10] = "alfredo";
	size_t		dstsize = 3;
	
	printf("%zu\n", strlcpy(dst, src, dstsize));
	printf("%zu\n", ft_strlcpy(dst1, src, dstsize));
	return (0);
}*/
