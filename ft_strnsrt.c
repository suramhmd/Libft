/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnsrt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaabes <sdaabes@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 22:15:59 by sdaabes           #+#    #+#             */
/*   Updated: 2025/08/15 22:44:59 by sdaabes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;

    while (big[i] != '\0' && i < len)
    {
        j =0;
        while (little[j] == big[i] && little[j] && big[i])
        {
            j++;
            i++;
        }
        if(little[j] == '\0')
        return 
        
        i++;
    }
}