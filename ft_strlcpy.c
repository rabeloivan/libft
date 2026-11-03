/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:28 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/03 20:18:39 by irabelo          ###   ########.fr       */
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

// int	main(void)
// {
// 	char	dst[10] = "xxx";

// 	printf("'dst' before ft_strlcpy:\n%s\n", dst);
// 	ft_strlcpy(dst, "Hello, World!", sizeof(dst));
// 	printf("\n'dst' before ft_strlcpy:\n%s\n", dst);
// 	return (0);
// }