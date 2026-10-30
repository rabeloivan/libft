/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:43:14 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/30 20:05:12 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	len;
	size_t	space;

	dst_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	space = size - dst_len;
	if (!space)
		return (dst_len + ft_strlen(src));
	len = 0;
	while (len < space - 1 && src[len])
	{
		dst[dst_len + len] = src[len];
		len++;
	}
	dst[dst_len + len] = '\0';
	return (dst_len + ft_strlen(src));
}

// int	main(void)
// {
// 	size_t	total_len;
// 	char	dst[10] = "Hello, ";

// 	total_len = ft_strlcat(dst, "World!", sizeof(dst));
// 	printf("%s\n%zu\n", dst, total_len);
// 	return (0);
// }