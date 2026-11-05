/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 13:43:50 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 12:04:19 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		byte;
	size_t				offset;

	ptr = (const unsigned char *)s;
	byte = (unsigned char)c;
	offset = 0;
	while (offset < n)
	{
		if (ptr[offset] == byte)
			return ((void *)(ptr + offset));
		offset++;
	}
	return (NULL);
}

// int	main(int argc, char **argv)
// {
// 	char	*ptr;

// 	if (argc != 3 || argv[2][1] != '\0')
// 	{
// 		printf("Usage: %s <string> <character>\n", argv[0]);
// 		return (1);
// 	}
// 	ptr = ft_memchr(argv[1], (unsigned char)argv[2][0], ft_strlen(argv[1]) + 1);
// 	if (ptr)
// 		printf("Found at offset %td: %s\n", ptr - argv[1], ptr);
// 	else
// 		printf("Not found.\n");
// 	return (0);
// }