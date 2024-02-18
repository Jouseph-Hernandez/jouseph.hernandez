/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 01:17:01 by joushern          #+#    #+#             */
/*   Updated: 2024/01/20 01:34:10 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	unsigned char	a;

	a = (unsigned char)c;
	if (c >= 0 && c < 128)
		return (1);
	return (0);
}
/*
int	main()
{
	int	a;
	int b;

	a = 0;
	b = -1;
	printf("%d\n", ft_isascii(a));
	printf("%d\n", ft_isascii(b));
	return(0);
}*/
