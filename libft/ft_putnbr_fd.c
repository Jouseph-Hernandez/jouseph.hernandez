/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 00:28:17 by joushern          #+#    #+#             */
/*   Updated: 2024/02/07 00:30:40 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	lnb;

	lnb = n;
	if (lnb < 0)
	{
		ft_putchar_fd('-', fd);
		lnb *= -1;
	}
	if (lnb >= 10)
	{
		ft_putnbr_fd((lnb / 10), fd);
		lnb = lnb % 10;
	}
	if (lnb < 10)
		ft_putchar_fd((lnb + '0'), fd);
}
