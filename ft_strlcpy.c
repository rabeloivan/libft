/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:28 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/30 23:12:43 by irabelo          ###   ########.fr       */
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
