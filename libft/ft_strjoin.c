/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 20:50:56 by joushern          #+#    #+#             */
/*   Updated: 2024/01/28 21:21:00 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	total_len;
	size_t	i;
	size_t	j;

	if (s1[0] == '\0' && s2[0] == '\0')
		return (ft_strdup(""));
	total_len = (ft_strlen(s1)) + (ft_strlen(s2)) + 1;
	new_str = (char *)malloc(total_len * (sizeof(char)));
	if (!new_str)
		return (NULL);
	i = -1;
	j = -1;
	while (s1[++i])
		new_str[++j] = s1[i];
	i = -1;
	while (s2[++i])
		new_str[++j] = s2[i];
	new_str[j + 1] = '\0';
	return (new_str);
}
