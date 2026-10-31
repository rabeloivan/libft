/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 13:43:50 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/31 21:03:11 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_ptr;
	unsigned char		byte;
	size_t				offset;

	s_ptr = (const unsigned char *)s;
	byte = (unsigned char)c;
	offset = 0;
	while (offset < n)
	{
		if (s_ptr[offset] == byte)
			return ((void *)(s_ptr + offset));
		offset++;
	}
	return (NULL);
}
