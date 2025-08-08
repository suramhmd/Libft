/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaabes <sdaabes@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 20:55:17 by sdaabes           #+#    #+#             */
/*   Updated: 2025/08/08 00:18:33 by sdaabes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>
void *ft_memset(void *ptr, int value, size_t num)
{
    size_t i;
    i = 0;
    unsigned char *arr = (unsigned char *)ptr;

    while (i < num)
    {
        arr[i] = (unsigned char)value;
        i++;
    }
    return ptr;
}
int main ()
{
    char str[50] = "Hello, World!";
    ft_memset(str, '*', 5);
    // str should now be "***** World!"
    printf("%s\n", str);
    return 0;
}