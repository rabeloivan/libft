/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:21 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 18:08:00 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int	main(void)
// {
// 	char	ptr[5] = {'a', 'b', 'c', 'd', 'e'};
// 	size_t	bytes;
// 	size_t	offset;

// 	bytes = sizeof(ptr);
// 	printf("Before: ");
// 	offset = 0;
// 	while (offset < bytes)
// 	{
// 		printf("%c ", ptr[offset]);
// 		offset++;
// 	}
// 	ft_bzero(ptr, bytes);
// 	printf("\nAfter: ");
// 	offset = 0;
// 	while (offset < bytes)
// 	{
// 		printf("%d ", ptr[offset]);
// 		offset++;
// 	}
// 	printf("\n");
// 	return (0);
// }