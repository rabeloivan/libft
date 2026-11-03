/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 13:43:50 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/03 23:07:48 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		byte;
	size_t				offset;

	ptr = (const unsigned char *)s;
	byte = (unsigned char)c;
	offset = 0;
	while (offset < n)
	{
		if (ptr[offset] == byte)
			return ((void *)(ptr + offset));
		offset++;
	}
	return (NULL);
}

// int	main(int argc, char **argv)
// {
// 	if (argc != 3 || !(argv[2][0] != '\0' && argv[2][1] == '\0'))
// 	{
// 		printf("Wrong number of arguments.\n");
// 		return (1);
// 	}
// 	printf("%s\n", (char *)ft_memchr((const void *)argv[1], (int)argv[2][0],
// 			ft_strlen(argv[1])));
// 	return (0);
// }