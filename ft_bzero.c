/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:21 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/03 20:16:53 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int	main(void)
// {
// 	char	arr[10];
// 	size_t	len;
// 	size_t	offset;

// 	printf("'arr' before ft_bzero:\n");
// 	len = sizeof(arr);
// 	offset = 0;
// 	while (offset < len)
// 	{
// 		arr[offset] = '9';
// 		printf("%c ", arr[offset++]);
// 	}
// 	ft_bzero((void *)arr, len);
// 	printf("\n\n'arr' after ft_bzero:\n");
// 	offset = 0;
// 	while (offset < len)
// 		printf("%c ", arr[offset++]);
// 	printf("\n");
// 	return (0);
// }