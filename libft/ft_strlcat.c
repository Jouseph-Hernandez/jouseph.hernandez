/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:49:28 by joushern          #+#    #+#             */
/*   Updated: 2024/01/28 16:10:15 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		total_len;
	size_t		dest_len;
	size_t		i;

	total_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	i = 0;
	if (dstsize <= dest_len)
		total_len += dstsize;
	else
		total_len += dest_len;
	while ((char)src[i] && (dest_len + 1) < dstsize)
	{
		dst[dest_len] = src[i];
		i++;
		dest_len++;
	}
	dst[dest_len] = '\0';
	return (total_len);
}
