/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaabes <sdaabes@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:13:15 by sdaabes           #+#    #+#             */
/*   Updated: 2025/08/31 16:45:51 by sdaabes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (c);
	}
	else
		return (0);
}

// int main()
// {
// 	int c = 'A';
// 	if (ft_isalpha(c))
// 	{
// 		printf("%c is an alphabetic character.\n", c);
// 	}
// 	else
// 	{
// 		printf("%c is not an alphabetic character.\n", c);
// 	}
// 	return 0;
// }