/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 13:44:24 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/03 20:21:10 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	size_t				offset;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	offset = 0;
	while (offset < n)
	{
		dest_ptr[offset] = src_ptr[offset];
		offset++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[10] = "xxx";

// 	printf("'dest' before ft_memcpy:\n%s\n", dest);
// 	ft_memcpy((char *)dest, (const char *)"Hello, World!", sizeof(dest));
// 	printf("\n'dest' before ft_memcpy:\n%s\n", dest);
// 	return (0);
// }