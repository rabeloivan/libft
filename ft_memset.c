/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:19 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/03 20:16:46 by irabelo          ###   ########.fr       */
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

// int	main(void)
// {
// 	char	arr[10];
// 	size_t	len;
// 	size_t	offset;

// 	printf("'arr' before ft_memset:\n");
// 	len = sizeof(arr);
// 	offset = 0;
// 	while (offset < len)
// 	{
// 		arr[offset] = '0';
// 		printf("%c ", arr[offset++]);
// 	}
// 	ft_memset((void *)arr, '9', len);
// 	printf("\n\n'arr' after ft_memset:\n");
// 	offset = 0;
// 	while (offset < len)
// 		printf("%c ", arr[offset++]);
// 	printf("\n");
// 	return (0);
// }