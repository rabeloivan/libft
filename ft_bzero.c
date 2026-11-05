/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:21 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 11:23:16 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int	main(void)
// {
// 	unsigned char	ptr[5] = {1, 2, 3, 4, 5};
// 	size_t			bytes;
// 	size_t			offset;

// 	bytes = sizeof(ptr);
// 	printf("Before: ");
// 	offset = 0;
// 	while (offset < bytes)
// 		printf("%zu ", (size_t)ptr[offset++]);
// 	ft_bzero(ptr, bytes);
// 	printf("\nAfter: ");
// 	offset = 0;
// 	while (offset < bytes)
// 		printf("%zu ", (size_t)ptr[offset++]);
// 	printf("\n");
// 	return (0);
// }