/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaabes <sdaabes@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:57:27 by sdaabes           #+#    #+#             */
/*   Updated: 2025/08/30 20:02:06 by sdaabes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void upper_even(unsigned int i, char *c)
// {
//     if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
//         *c = *c - 32;
// }

// int main(void)
// {
//     char str[] = "hello42";
//     ft_striteri(str, upper_even);
//     printf("%s\n", str);
//     return (0);
// }