/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 00:03:30 by joushern          #+#    #+#             */
/*   Updated: 2024/02/08 01:52:19 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*other_pointer;

	other_pointer  = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			other_pointer = ((char *)s);
			printf("other pointer is: %s\n", other_pointer);
		}
		printf("s is: %s\n", s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (other_pointer);
}

int	main(void)
{
	ft_strrchr("ABCDEFXGHIJKL", 'X');
	return (0);
}
