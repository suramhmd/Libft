/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaabes <sdaabes@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 20:52:35 by sdaabes           #+#    #+#             */
/*   Updated: 2025/08/31 16:49:01 by sdaabes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	const char *s1 = "Hello, World!";
// 	const char *s2 = "Hello, World?";
// 	size_t n = 13;

// 	int result = ft_strncmp(s1, s2, n);
// 	if (result < 0)
// 	{
// 		printf("s1 is less than s2\n");
// 	}
// 	else if (result > 0)
// 	{
// 		printf("s1 is greater than s2\n");
// 	}
// 	else
// 	{
// 		printf("s1 is equal to s2\n");
// 	}
// 	return 0;
// }