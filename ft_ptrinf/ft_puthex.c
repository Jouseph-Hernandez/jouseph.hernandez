
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:35:20 by joushern          #+#    #+#             */
/*   Updated: 2024/02/17 23:00:20 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_libft.h"

int    ft_puthex(char *base, unsigned int nb)
{
    unsigned int lnb[100];
    int         check_error;
    int         i;

    i = 0;
    if (nb == 0)
        ft_putchar('0');
	while (nb)
	{
		lnb[i] = nb % 16;
		nb = nb / 16;
        i++;
	}
	while (--i >= 0)
		ft_putchar(base[lnb[i]]);
    return (0);
}

int main(void)
{
    ft_puthex("0123456789abcdef", 0);
    return (0);
}