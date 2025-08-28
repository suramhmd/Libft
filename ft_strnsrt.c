/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnsrt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaabes <sdaabes@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 22:15:59 by sdaabes           #+#    #+#             */
/*   Updated: 2025/08/28 17:44:17 by sdaabes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    if (*little == '\0')
        return ((char *)big);
    i = 0;
    while (big[i] != '\0' && i < len)
    {
        j = 0;
        while (big[i + j] == little[j] && (i + j) < len)
        {
            if (little[j + 1] == '\0')
                return ((char *)(big + i));
            j++;
        }
        i++;
    }
    return (NULL);
}