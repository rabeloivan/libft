/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:44:41 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/30 00:15:43 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (!nmemb || !size)
		return (malloc(1));
	if (size > ((size_t)-1) / nmemb)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

// int	main(void)
// {
// 	int	*arr;
// 	int	i;

// 	arr = (int *)ft_calloc(5, sizeof(int));
// 	if (!arr)
// 		return (1);
// 	i = 0;
// 	while (i < 5)
// 		printf("%d ", arr[i++]);
// 	printf("\n");
// 	free(arr);
// 	return (0);
// }