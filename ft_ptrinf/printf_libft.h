/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_libft.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:01:16 by joushern          #+#    #+#             */
/*   Updated: 2024/02/17 23:17:30 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_LIBFT_H
# define PRINTF_LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stddef.h>
# include <ctype.h>
# include <stdarg.h>

unsigned int	ft_strlen(const char *s);
int             ft_putchar(char c);
int             ft_putstr(const char *s);
int             ft_putlongnbr(unsigned int n);
int             ft_putnbr(int n);
int             ft_printf(const char *s, ...);
int             ft_puthex(char *base, unsigned int nb);

#endif