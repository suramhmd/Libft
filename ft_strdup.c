/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaabes <sdaabes@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 17:21:08 by sdaabes           #+#    #+#             */
/*   Updated: 2025/08/31 16:48:01 by sdaabes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	i;

	i = 0;
	dup = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// int main()
// {
// 	const char *s1 = "Hello, World!";
// 	char *dup = ft_strdup(s1);
// 	if (dup)
// 	{
// 		printf("Original: %s\n", s1);
// 		printf("Duplicate: %s\n", dup);
// 		free(dup);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed\n");
// 	}
// 	return 0;
// }