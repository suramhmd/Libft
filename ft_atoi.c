/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaabes <sdaabes@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:39:03 by sdaabes           #+#    #+#             */
/*   Updated: 2025/08/31 16:45:14 by sdaabes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	temp;
	int	result;

	i = 0;
	sign = 1;
	temp = 0;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp = str[i] - '0';
		result = result * 10 + temp;
		i++;
	}
	return (result * sign);
}

// int main()
// {
// 	const char *str = "   -12345abc";
// 	int result = ft_atoi(str);
// 	printf("The converted integer is: %d\n", result);
// 	return 0;
// }