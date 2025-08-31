/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaabes <sdaabes@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:38:40 by sdaabes           #+#    #+#             */
/*   Updated: 2025/08/31 16:46:16 by sdaabes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	else
	{
		return (0);
	}
}

// int main()
// {
// 	int c = 'A';
// 	if (ft_isprint(c))
// 	{
// 		printf("%c is a printable character.\n", c);
// 	}
// 	else
// 	{
// 		printf("%c is not a printable character.\n", c);
// 	}
// 	return 0;
// }