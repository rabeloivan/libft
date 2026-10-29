/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 13:43:50 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/29 16:21:47 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		uc;
	size_t				len;

	str = (unsigned char *)s;
	uc = (unsigned char)c;
	len = 0;
	while (len < n)
	{
		if (str[len] == uc)
			return ((void *)(str + len));
		len++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s\n", (char *)ft_memchr("Hello, World!", 'o', 7));
// 	return (0);
// }