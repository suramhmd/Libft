/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaabes <sdaabes@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 20:55:17 by sdaabes           #+#    #+#             */
/*   Updated: 2025/08/30 20:13:40 by sdaabes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*arr;

	i = 0;
	arr = (unsigned char *)ptr;
	while (i < num)
	{
		arr[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}

// int main ()
// {
//     char str[50] = "Hello, World!";
//     ft_memset(str, '*', 5);
//     // str should now be "***** World!"
//     printf("%s\n", str);
//     return (0);
// }