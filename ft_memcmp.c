/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 16:21:52 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/03 22:12:19 by irabelo          ###   ########.fr       */
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

// int	main(int argc, char **argv)
// {
// 	size_t	len;
// 	size_t	offset;

// 	if (argc != 3)
// 	{
// 		printf("Wrong number of arguments.\n");
// 		return (1);
// 	}
// 	len = ft_strlen(argv[1]);
// 	offset = 0;
// 	while (offset < len)
// 	{
// 		if (argv[1][offset] != argv[2][offset])
// 			break ;
// 		offset++;
// 	}
// 	printf("%d (%c) - %d (%c) = %d\n", argv[1][offset], argv[1][offset],
// 		argv[2][offset], argv[2][offset],
// 		ft_memcmp((const void *)argv[1], (const void *)argv[2], len));
// 	return (0);
// }