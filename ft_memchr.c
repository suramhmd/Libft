/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaabes <sdaabes@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 21:09:16 by sdaabes           #+#    #+#             */
/*   Updated: 2025/08/31 16:46:38 by sdaabes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	const char str[] = "Hello, World!";
// 	int c = 'W';
// 	size_t n = 13;

// 	char *result = (char *)ft_memchr(str, c, n);
// 	if (result != NULL)
// 	{
// 		printf("Character '%c' found at position: %ld\n", c, result - str);
// 	}
// 	else
// 	{
// 		printf("Character '%c' not found in the first %zu bytes.\n", c, n);
// 	}
// 	return 0;
// }