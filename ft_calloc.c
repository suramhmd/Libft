/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaabes <sdaabes@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 17:08:57 by sdaabes           #+#    #+#             */
/*   Updated: 2025/08/31 16:45:29 by sdaabes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)

{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int main()
// {
// 	size_t count = 5;
// 	size_t size = sizeof(int);
// 	int *arr = (int *)ft_calloc(count, size);
// 	if (arr == NULL)
// 	{
// 		printf("Memory allocation failed\n");
// 		return 1;
// 	}
// 	for (size_t i = 0; i < count; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	printf("\n");
// 	free(arr);
// 	return 0;
// }