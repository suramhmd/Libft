/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaabes <sdaabes@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 20:06:19 by sdaabes           #+#    #+#             */
/*   Updated: 2025/08/30 20:48:00 by sdaabes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char *text = "Hello, world!";
// 	char ch = 'o';

// 	char *result = ft_strrchr(text, ch);

// 	if (result != NULL)
// 	{
// 		printf("Last occurrence of '%c' found at index: %ld\n", ch, result
// 				- text);
// 		printf("Substring from last '%c': \"%s\"\n", ch, result);
// 	}
// 	else
// 	{
// 		printf("Character '%c' not found in the string.\n", ch);
// 	}

// 	return (0);
// }