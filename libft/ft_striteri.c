/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 23:20:48 by joushern          #+#    #+#             */
/*   Updated: 2024/02/06 23:38:30 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, (s + i));
		i++;
	}
}
/*
static void func(unsigned int n, char *s)
{
	char *str;

    n *= 1;
	str = s;
}

int	main(void)
{
	ft_striteri("banana", func);
	return (0);
}*/
