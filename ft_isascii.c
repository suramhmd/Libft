/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaabes <sdaabes@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:03:59 by sdaabes           #+#    #+#             */
/*   Updated: 2025/08/31 16:45:59 by sdaabes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main()
// {
// 	int c = 65; // ASCII value for 'A'
// 	if (ft_isascii(c))
// 	{
// 		printf("%d is an ASCII character.\n", c);
// 	}
// 	else
// 	{
// 		printf("%d is not an ASCII character.\n", c);
// 	}
// 	return 0;
// }