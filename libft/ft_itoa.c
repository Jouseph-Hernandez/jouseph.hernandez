/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 23:26:54 by joushern          #+#    #+#             */
/*   Updated: 2024/02/06 01:47:56 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nblen(long nb)
{
	size_t	count;

	count = 0;
	if (nb <= 9 && nb >= 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		count++;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

static char	*str_nbr(long nb)
{
	size_t	nb_len;
	char	*s;

	nb_len = ft_nblen(nb);
	s = (char *)ft_calloc(nb_len + 1, sizeof(char));
	if (!s)
		return (NULL);
	s[nb_len] = '\0';
	nb_len--;
	if (nb < 0)
	{
		nb *= -1;
		s[0] = '-';
	}
	if (nb == 0)
		s[0] = '0';
	while (nb > 0)
	{
		s[nb_len] = '0' + (nb % 10);
		nb /= 10;
		nb_len--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;

	nb = n;
	str = str_nbr(nb);
	return (str);
}
