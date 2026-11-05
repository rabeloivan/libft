/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:28 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 18:41:44 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	offset;

	offset = 0;
	if (size > 0)
	{
		while (offset < size - 1 && src[offset])
		{
			dst[offset] = src[offset];
			offset++;
		}
		dst[offset] = '\0';
	}
	while (src[offset])
		offset++;
	return (offset);
}

// int	main(int argc, char **argv)
// {
// 	size_t	len;
// 	char	dst[20];

// 	if (argc != 2)
// 	{
// 		printf("Usage: %s <string>\n", argv[0]);
// 		return (1);
// 	}
// 	len = ft_strlcpy(dst, argv[1], sizeof(dst));
// 	printf("Source: %s\nDestination: %s\n", argv[1], dst);
// 	printf("Source length: %zu\n", len);
// 	return (0);
// }