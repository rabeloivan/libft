/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:19 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/29 10:52:20 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char			*str;
	unsigned char	uc;
	size_t			len;

	str = (char *)s;
	uc = (unsigned char)c;
	len = 0;
	while (len < n)
		str[len++] = uc;
	return (s);
}

// int	main(void)
// {
// 	size_t	len;
// 	char	arr[10];

// 	len = 0;
// 	while (len < 10)
// 		arr[len++] = 'a';
// 	len = 0;
// 	printf("'arr[10]' before ft_memset:\n");
// 	while (len < 10)
// 		printf("%c ", arr[len++]);
// 	printf("\n");
// 	ft_memset(arr, 'b', sizeof(arr));
// 	len = 0;
// 	printf("\n'arr[10]' after ft_memset:\n");
// 	while (len < 10)
// 		printf("%c ", arr[len++]);
// 	printf("\n");
// 	return (0);
// }