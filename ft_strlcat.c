/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaabes <sdaabes@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 23:43:15 by sdaabes           #+#    #+#             */
/*   Updated: 2025/08/28 17:50:49 by sdaabes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t src_len;

    i = 0;
    src_len = 0;

    while (src[src_len] != '\0')
        src_len++;
    if (size == 0)
        return (src_len);
    while (src[i] != '\0' && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (src_len);
}