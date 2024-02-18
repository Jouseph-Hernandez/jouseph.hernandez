/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 01:35:15 by joushern          #+#    #+#             */
/*   Updated: 2024/01/27 19:36:24 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 40;
	b = 20;
	printf("%d\n", ft_isprint(a));
	printf("%d\n", ft_isprint(b));
	return (0);
}*/
