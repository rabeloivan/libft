/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 16:21:52 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 18:52:03 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				offset;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	offset = 0;
	while (offset < n)
	{
		if (ptr1[offset] != ptr2[offset])
			return ((unsigned char)ptr1[offset]
				- (unsigned char)ptr2[offset]);
		offset++;
	}
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	int		n;
// 	size_t	bytes;
// 	size_t	offset;

// 	if (argc != 4)
// 	{
// 		printf("Usage: %s <string1> <string2> <bytes>\n", argv[0]);
// 		return (1);
// 	}
// 	n = ft_atoi(argv[3]);
// 	if (n < 0)
// 		return (1);
// 	bytes = (size_t)n;
// 	if (bytes > ft_strlen(argv[1]) || bytes > ft_strlen(argv[2]))
// 	{
// 		printf("Error: byte count exceeds buffer size.\n");
// 		return (1);
// 	}
// 	offset = 0;
// 	while (offset < bytes)
// 	{
// 		if (argv[1][offset] != argv[2][offset])
// 			break ;
// 		offset++;
// 	}
// 	if (offset < bytes)
// 		printf("%d (%c) - %d (%c) = %d\n",
// 			argv[1][offset], argv[1][offset],
// 			argv[2][offset], argv[2][offset],
// 			ft_memcmp(argv[1], argv[2], bytes));
// 	else
// 		printf("0\n");
// 	return (0);
// }