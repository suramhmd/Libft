/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaabes <sdaabes@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:30:01 by sdaabes           #+#    #+#             */
/*   Updated: 2025/08/31 16:46:08 by sdaabes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (c);
	else
		return (0);
}

// int main()
// {
// 	int c = '5';
// 	if (ft_isdigit(c))
// 	{
// 		printf("%c is a digit.\n", c);
// 	}
// 	else
// 	{
// 		printf("%c is not a digit.\n", c);
// 	}
// 	return 0;
// }