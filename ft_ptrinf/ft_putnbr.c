
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:01:04 by joushern          #+#    #+#             */
/*   Updated: 2024/02/17 23:00:19 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_libft.h"

int	ft_putnbr(int n)
{
	long	lnb;

	lnb = n;
	if (lnb < 0)
	{
		ft_putchar('-');
		lnb *= -1;
	}
	if (lnb >= 10)
	{
		ft_putnbr(lnb / 10);
		lnb = lnb % 10;
	}
	if (lnb < 10)
		ft_putchar(lnb + '0');
	return (0);
}