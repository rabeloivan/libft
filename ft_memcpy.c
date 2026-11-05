/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 13:44:24 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 18:12:27 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	size_t				offset;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	offset = 0;
	while (offset < n)
	{
		dest_ptr[offset] = src_ptr[offset];
		offset++;
	}
	return (dest);
}

// int	main(int argc, char **argv)
// {
// 	size_t	bytes;
// 	char	ptr[20];

// 	if (argc != 2)
// 	{
// 		printf("Usage: %s <string>\n", argv[0]);
// 		return (1);
// 	}
// 	bytes = ft_strlen(argv[1]) + 1;
// 	if (bytes > sizeof(ptr) - 2)
// 	{
// 		printf("Error: byte count exceeds buffer size.\n");
// 		return (1);
// 	}
// 	ft_memcpy(ptr, argv[1], bytes);
// 	printf("Before: %s\n", ptr);
// 	ft_memcpy(ptr, ptr, bytes);
// 	printf("After: %s\n", ptr);
// 	ft_memcpy(ptr + 2, ptr, bytes);
// 	printf("After (right +2): %s\n", ptr);
// 	ft_memcpy(ptr, ptr + 2, bytes);
// 	printf("After (left -2): %s\n", ptr);
// 	return (0);
// }