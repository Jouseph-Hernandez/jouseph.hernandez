/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joushern <joushern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:41:04 by joushern          #+#    #+#             */
/*   Updated: 2024/02/06 01:46:23 by joushern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 MAIN FT_STRLCOPY
int	main(void)
{
	char		dst[10] = "EMPANADA";
	char		dst1[10] = "EMPANADA";
	char const	src[10] = "alfredo";
	size_t		dstsize = 3;

	printf("%zu\n", strlcpy(dst, src, dstsize));
	printf("%zu\n", ft_strlcpy(dst1, src, dstsize));
	return (0);
}*/
/*
int	main(void)MAIN FT_STRLCAT
{
	char		dst[9] = "EMPANADA";
	char		dst1[9] = "EMPANADA";
	char const	src[8] = "alfredo";
	size_t		dstsize = 8;

	printf("%zu\n", strlcat(dst, src, dstsize));
	printf("%zu\n", ft_strlcat(dst1, src, dstsize));
	return (0);
}*/
/*
int	main(void) MAIN TOUPPER AND TOLOWER
{
	char	str[7] = "banana";
	int		i = 0;

	while (str[i])
	{
		printf("%d", (ft_toupper(str[i])));
		i++;
	}
	return (0);
}*/
/*
int	main(void) //MAIN STRCHR Y STRRCHR
{
	int c = 'c';
	const char 	*s1 = "banana";
	const char	*s2 = "bananac";
	const char	*s3 = "bancnac";
	const char	*s4 = "";
	const char	*s5 = "canana";

	printf("%s\n", strrchr(s1,c));
	printf("%s\n",ft_strrchr(s1, c));
	printf("%s\n", strrchr(s2,c));
	printf("%s\n",ft_strrchr(s2, c));
	printf("%s\n", strrchr(s3,c));
	printf("%s\n",ft_strrchr(s3, c));
	printf("%s\n", strrchr(s4,c));
	printf("%s\n",ft_strrchr(s4, c));
	printf("%s\n", strrchr(s5,c));
	printf("%s\n",ft_strrchr(s5, c));
	return (0);
}*/
/*
int	main(void) MAIN FOR STRNCMP
{
	char	s1[7] = "banana";
	char	s2[7] = "banana";
	char	s3[3] = "no";

	printf("%d\n", strncmp(s1, s2, 3));
	printf("%d\n", ft_strncmp(s1, s2, 3));
	printf("%d\n", strncmp(s1, s3, 2));
	printf("%d\n", ft_strncmp(s1, s3, 2));
	return (0);
}*/
/* MAIN FOR MEMCHR
int	main(void)
{
	char	s[8] = "bananac";
	char	c = 'c';
	size_t	n = 4;
	size_t	m = 8;
	
	printf("%p\n", ft_memchr(s, c, n));
	printf("%p\n", memchr(s, c, n));
	printf("%p\n", ft_memchr(s, c, m));
	printf("%p\n", memchr(s, c, m));
	return (0);
}*/
/*
int	main(void) MAIN FOR MEMCMP
{
	const char	*s1 = "banana";
	const char	*s2 = "banana";
	const char	*s3 = "banAna";
	const char	*s4 = "xxxxxx";
	size_t		n = 6;

	printf("%d\n", ft_memcmp(s1, s2, n));
	printf("%d\n", memcmp(s1, s2, n));
	printf("%d\n", ft_memcmp(s1, s3, n));
	printf("%d\n", memcmp(s1, s3, n));
	printf("%d\n",ft_memcmp(s1, s4, n));
	printf("%d\n", memcmp(s1,s4, n));
	return (0);
}*/
/*
int	main (void) MAIN FOR STRNSTR
{
	const char	*haystk = "banana";
	const char	*haystk2 = "mariana";
	const char	*haystk3 = "";
	const char	*needle = "ana";
	const char	*needle1 = "";
	size_t		n = 6;
	size_t		n2 = 3;
	size_t		n3 = 7;

	printf("%s\n", ft_strnstr(haystk, needle, n));
	printf("%s\n", strnstr(haystk, needle, n));
	printf("%s\n", ft_strnstr(haystk2, needle, n3));
	printf("%s\n", strnstr(haystk2, needle, n3));
	printf("%s\n", ft_strnstr(haystk2, needle1, n2));
	printf("%s\n", strnstr(haystk2, needle1, n2));
	printf("%s\n", ft_strnstr(haystk3, needle, n));
	printf("%s\n", strnstr(haystk3, needle, n));
	return (0);
}*/
/*
int	main(void)
{
	printf("%d\n", ft_atoi("     -12"));
	printf("%d\n", atoi("     -12"));
	printf("%d\n", ft_atoi("124d3"));
	printf("%d\n", atoi("124d3"));
	printf("%d\n", ft_atoi("   ana123"));
	printf("%d\n", atoi("   ana123"));
	return (0);
}*/
/*
int	main(void)
{
	char const s[7] = "banana";
	unsigned int start = 3;
	size_t len = 44;
	
	printf("%s\n", ft_substr(s, start, len));
	return (0);
}*/

int	main(void)
{
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(1231231));
	printf("%s\n", ft_itoa(5));
	printf("%s\n", ft_itoa(-55));
	printf("%s\n", ft_itoa(0));
	return (0);
}
