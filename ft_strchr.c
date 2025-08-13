/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaabes <sdaabes@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:40:09 by sdaabes           #+#    #+#             */
/*   Updated: 2025/08/13 20:28:27 by sdaabes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strchr(const char *str, int c)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
         return ( (char *)&str[i]);   
        }
        i++;
    }
    if (c == '\0')
    {
        return ( (char *)&str[i]);
    }
    return (NULL);
}
int main()
{
    const char *str = "Hello, World!";
    char c = 'l';
    char *result = ft_strchr(str, c);
    if (result)
    {
        // result should point to "World!"
        printf("Character found: %s\n", result);
    }
    else
    {
        printf("Character not found.\n");
    }
    return 0;
}