/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:43:14 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/30 23:14:18 by irabelo          ###   ########.fr       */
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
