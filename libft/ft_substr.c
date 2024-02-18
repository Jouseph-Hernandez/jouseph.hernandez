/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:01:19 by joushern          #+#    #+#             */
/*   Updated: 2024/01/28 19:21:08 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			i;
	unsigned int	s_len;
	unsigned int	s_realen;

	if ((s[0] == '\0' && start > 0) || start > ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	s_len = ft_strlen(s);
	s_realen = ft_strlen(s + start);
	if (s_len < start)
		return (ft_strdup(""));
	if (s_realen < len)
		len = s_realen;
	substr = (char *)malloc((len + 1) * (sizeof(char)));
	if (!substr)
		return (NULL);
	while (i < s_realen && start < s_len && i < len)
	{
		substr[i] = (char)s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
