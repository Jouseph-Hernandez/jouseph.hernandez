/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:16:12 by joushern          #+#    #+#             */
/*   Updated: 2024/01/28 17:59:58 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*arr;
	size_t	len;

	len = ft_strlen(s1) + 1;
	arr = (char *)malloc((len) * (sizeof(char)));
	if (!arr)
		return (NULL);
	ft_memcpy(arr, s1, len);
	return (arr);
}
