/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:44:41 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/03 23:11:46 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bytes;
	void	*ptr;

	if (!nmemb || !size)
		return (malloc(0));
	if (size > ((size_t)-1) / nmemb)
		return (NULL);
	bytes = nmemb * size;
	ptr = malloc(bytes);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, bytes);
	return (ptr);
}

// int	main(void)
// {
// 	int		*ptr;
// 	size_t	offset;
// 	void	*zero;
// 	void	*overflow;

// 	printf("1. Normal Allocation\n");
// 	ptr = ft_calloc(5, sizeof(int));
// 	if (!ptr)
// 		return (1);
// 	offset = 0;
// 	while (offset < 5)
// 	{
// 		printf("ptr[%zu] = %d\n", offset, ptr[offset]);
// 		offset++;
// 	}
// 	free(ptr);
// 	printf("\n2. nmemb = 0\n");
// 	zero = ft_calloc(0, sizeof(int));
// 	printf("Ponteiro: %p\n", zero);
// 	free(zero);
// 	printf("\n3. size = 0\n");
// 	zero = ft_calloc(5, 0);
// 	printf("Ponteiro: %p\n", zero);
// 	free(zero);
// 	printf("\n4. Overflow\n");
// 	overflow = ft_calloc((size_t)-1, 2);
// 	if (!overflow)
// 		printf("OK\n");
// 	else
// 	{
// 		printf("ERROR\n");
// 		free(overflow);
// 	}
// 	return (0);
// }