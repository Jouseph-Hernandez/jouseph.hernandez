
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:11:16 by joushern          #+#    #+#             */
/*   Updated: 2024/02/17 23:00:18 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_libft.h"

int    ft_putstr(const char *s)
{
    char    *str;
    int     i;

    str = s;
    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return (0);
}