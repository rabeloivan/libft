/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 13:44:43 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 10:34:28 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	size_t				offset;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	if (dest_ptr < src_ptr)
		ft_memcpy(dest, src, n);
	else
	{
		offset = n;
		while (offset--)
			dest_ptr[offset] = src_ptr[offset];
	}
	return (dest);
}

// int	main(int argc, char **argv)
// {
// 	size_t	bytes;
// 	char	ptr[64];

// 	if (argc != 2)
// 	{
// 		printf("Usage: %s <string>\n", argv[0]);
// 		return (1);
// 	}
// 	bytes = ft_strlen(argv[1]) + 1;
// 	if (bytes > sizeof(ptr) - 2)
// 		return (1);
// 	ft_memcpy(ptr, argv[1], bytes);
// 	printf("Before: %s\n", ptr);
// 	ft_memmove(ptr + 2, ptr, bytes);
// 	printf("After (right +2): %s\n", ptr);
// 	ft_memmove(ptr, ptr + 2, bytes);
// 	printf("After (left -2): %s\n", ptr);
// 	return (0);
// }