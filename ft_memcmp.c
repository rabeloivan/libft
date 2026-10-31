/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 16:21:52 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/31 21:23:27 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_ptr;
	const unsigned char	*s2_ptr;
	size_t				offset;

	s1_ptr = (const unsigned char *)s1;
	s2_ptr = (const unsigned char *)s2;
	offset = 0;
	while (offset < n)
	{
		if (s1_ptr[offset] != s2_ptr[offset])
			return ((unsigned char)s1_ptr[offset]
				- (unsigned char)s2_ptr[offset]);
		offset++;
	}
	return (0);
}
