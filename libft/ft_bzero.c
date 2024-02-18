/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:28:01 by joushern          #+#    #+#             */
/*   Updated: 2024/01/27 19:23:18 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	if (n != 0)
	{
		str = s;
		i = -1;
		while (++i < n)
			str[i] = '\0';
	}
}
/*
int main(void)
{
	unsigned char str[100];
	unsigned char string_test[100]; 

	bzero(string_test, 10);
	printf("%s\n", string_test);
	ft_bzero(str, 10);
	printf("%s\n", str);
	return (0);
}*/
