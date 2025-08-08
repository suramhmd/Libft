/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaabes <sdaabes@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 23:56:41 by sdaabes           #+#    #+#             */
/*   Updated: 2025/08/08 00:39:21 by sdaabes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>


void ft_bzero(void *str, size_t n)
{
    size_t i;
    i = 0;
    unsigned char *arr =(unsigned char *) str;
    while (i < n)
    {
        arr[i] = 0;
        i++;
    }
   
}
int main ()
{
    char str[19] = "just listen to me ";
    ft_bzero(str, 5);
    printf("%s\n", str);
    return 0;
}