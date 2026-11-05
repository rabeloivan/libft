/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:43:14 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/04 21:21:57 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	space;
	size_t	offset;

	dst_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	space = size - dst_len;
	if (!space)
		return (dst_len + ft_strlen(src));
	offset = 0;
	while (offset < space - 1 && src[offset])
	{
		dst[dst_len + offset] = src[offset];
		offset++;
	}
	dst[dst_len + offset] = '\0';
	return (dst_len + ft_strlen(src));
}

// int	main(int argc, char **argv)
// {
// 	char	dst[10];
// 	size_t	len;

// 	if (argc != 3)
// 	{
// 		printf("Usage: %s <string1> <string2>\n", argv[0]);
// 		return (1);
// 	}
// 	if (ft_strlen(argv[1]) >= sizeof(dst))
// 		return (1);
// 	ft_strlcpy(dst, argv[1], sizeof(dst));
// 	printf("Before: %s\n", dst);
// 	len = ft_strlcat(dst, argv[2], sizeof(dst));
// 	printf("After: %s\nDestination length + Source length: %zu\n", dst, len);
// 	return (0);
// }