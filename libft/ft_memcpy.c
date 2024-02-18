/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:59:34 by joushern          #+#    #+#             */
/*   Updated: 2024/02/01 02:02:35 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*tmp_dst;
	unsigned char		*tmp_src;
	size_t				i;

	i = 0;
	tmp_src = (unsigned char *)src;
	tmp_dst = (unsigned char *)dst;
	if (!tmp_src && !tmp_dst)
		return (NULL);
	while (i < n)
	{
		tmp_dst[i] = tmp_src[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char str[10] = "banana";
	char str1[10] = "banana";
	const char src[10] = "palabra";
	size_t n = 3 * sizeof(char);

	printf("%s\n", memcpy(str, src, n));
	printf("%s\n", ft_memcpy(str1, src, n));
	return (0);
}*/
