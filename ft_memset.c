/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:19 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 10:18:37 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	byte;
	size_t			offset;

	ptr = (unsigned char *)s;
	byte = (unsigned char)c;
	offset = 0;
	while (offset < n)
		ptr[offset++] = byte;
	return (s);
}

// int	main(int argc, char **argv)
// {
// 	size_t	bytes;
// 	char	ptr[10];

// 	if (argc != 3 || argv[2][1] != '\0')
// 	{
// 		printf("Usage: %s <string> <character>\n", argv[0]);
// 		return (1);
// 	}
// 	bytes = ft_strlen(argv[1]);
// 	if (bytes >= sizeof(ptr))
// 		return (1);
// 	ft_memcpy(ptr, argv[1], bytes + 1);
// 	printf("Before: %s\n", ptr);
// 	ft_memset(ptr, (unsigned char)argv[2][0], bytes);
// 	printf("After: %s\n", ptr);
// 	return (0);
// }