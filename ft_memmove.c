/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 13:44:43 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/31 20:58:19 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	if (dest_ptr < src_ptr)
		ft_memcpy(dest, src, n);
	else
		while (n--)
			dest_ptr[n] = src_ptr[n];
	return (dest);
}
