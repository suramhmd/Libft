/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaabes <sdaabes@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 18:45:58 by sdaabes           #+#    #+#             */
/*   Updated: 2025/08/30 20:16:54 by sdaabes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (d > s && d < s + n)
		while (n--)
			d[n] = s[n];
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char str1[20] = "Hello World";
// 	char str2[20];

// 	// Test 1: No overlap
// 	ft_memmove(str2, str1, 12); // copy "Hello World\0"
// 	printf("No overlap: %s\n", str2);

// 	// Test 2: Overlap (shift left)
// 	char str3[20] = "Hello World";
// 	ft_memmove(str3, str3 + 6, 6); // move "World" to the start
// 	printf("Overlap left: %s\n", str3);

// 	// Test 3: Overlap (shift right)
// 	char str4[20] = "Hello World";
// 	ft_memmove(str4 + 6, str4, 6); // move "Hello" into the middle
// 	printf("Overlap right: %s\n", str4);

// 	return (0);
// }