/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaabes <sdaabes@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 23:56:41 by sdaabes           #+#    #+#             */
/*   Updated: 2025/08/30 20:13:06 by sdaabes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*arr;

	i = 0;
	arr = (unsigned char *)str;
	while (i < n)
	{
		arr[i] = 0;
		i++;
	}
}

// int main ()
// {
//     char str[19] = "just listen to me ";
//     ft_bzero(str, 5);
//     printf("%s\n", str);
//     return (0);
// }