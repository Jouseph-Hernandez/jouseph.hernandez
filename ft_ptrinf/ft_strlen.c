
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:01:08 by joushern          #+#    #+#             */
/*   Updated: 2024/02/17 23:00:17 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_libft.h"

unsigned int    ft_strlen(const char *str)
{
    unsigned int    len;

    len = 0;
    while (str[len])
    {
        len++;
    }
    return (len);
}