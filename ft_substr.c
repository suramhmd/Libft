/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaabes <sdaabes@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 17:39:11 by sdaabes           #+#    #+#             */
/*   Updated: 2025/08/31 16:49:41 by sdaabes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// int main()
// {
// 	const char *s = "Hello, World!";
// 	unsigned int start = 7;
// 	size_t len = 5;
// 	char *substr = ft_substr(s, start, len);
// 	if (substr)
// 	{
// 		printf("Substring: %s\n", substr);
// 		free(substr);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed\n");
// 	}
// 	return 0;
// }