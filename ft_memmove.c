/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 13:44:43 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/29 16:10:26 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				len;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		len = 0;
		while (len < n)
		{
			d[len] = s[len];
			len++;
		}
	}
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[5];
// 	char	src[] = "Hello, World!";

// 	printf("'dest[5]' before ft_memmove:\n");
// 	printf("%s\n", dest);
// 	ft_memmove(dest, src, sizeof(dest));
// 	printf("\n'dest[5]' before ft_memmove:\n");
// 	printf("%s\n", dest);
// 	return (0);
// }