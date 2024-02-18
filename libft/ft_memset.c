/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:06:30 by joushern          #+#    #+#             */
/*   Updated: 2024/01/22 01:35:09 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	ch;
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	ch = (unsigned char)c;
	tmp = b;
	while (i < len)
	{
		tmp[i] = ch;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char data[100] = "123456789012345667890";

	memset(data, 'A', 10);
	puts(data);
	printf("%s\n", ft_memset(data,'A', 10));
	return (0);
}*/
