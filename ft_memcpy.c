/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 13:44:24 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/29 16:08:28 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				len;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	len = 0;
	while (len < n)
	{
		d[len] = s[len];
		len++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[5];
// 	char	src[] = "Hello, World!";

// 	printf("'dest[5]' before ft_memcpy:\n");
// 	printf("%s\n", dest);
// 	ft_memcpy(dest, src, sizeof(dest));
// 	printf("\n'dest[5]' before ft_memcpy:\n");
// 	printf("%s\n", dest);
// 	return (0);
// }