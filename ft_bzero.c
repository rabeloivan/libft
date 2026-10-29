/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:21 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/29 10:52:23 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int	main(void)
// {
// 	size_t	len;
// 	int		arr[10];

// 	len = 0;
// 	while (len < 10)
// 		arr[len++] = 42;
// 	len = 0;
// 	printf("'arr[10]' before ft_bzero:\n");
// 	while (len < 10)
// 		printf("%d ", arr[len++]);
// 	printf("\n");
// 	ft_bzero(arr, sizeof(arr));
// 	len = 0;
// 	printf("\n'arr[10]' after ft_bzero:\n");
// 	while (len < 10)
// 		printf("%d ", arr[len++]);
// 	printf("\n");
// 	return (0);
// }