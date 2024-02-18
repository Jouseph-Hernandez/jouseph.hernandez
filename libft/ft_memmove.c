/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:29:25 by joushern          #+#    #+#             */
/*   Updated: 2024/02/01 02:04:57 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*dest;
	const unsigned char		*source;
	size_t					i;

	dest = dst;
	source = src;
	if (dest == source)
		return (dst);
	if (dest > source)
	{
		i = len + 1;
		while (--i > 0)
			dest[i - 1] = source[i -1];
	}
	else
	{
		i = -1;
		while (++i < len)
			dest[i] = source[i];
	}
	return ((void *)dest);
}
/*
int	main(void)
{
	char	src[16] = "Coolname";
	char	src1[16] = "Coolname";
	char	dst[8] = "XXXXXXX";
	size_t	n;

   	n = 0 * sizeof(char);
	printf("%s\n", memmove(dst, src, n));
	printf("%s\n", ft_memmove(dst, src1, n));
	return (0);
}*/
