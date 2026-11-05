/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:44:41 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 11:19:22 by irabelo          ###   ########.fr       */
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

// 	printf("1. Normal Allocation (5 integers)\n");
// 	ptr = ft_calloc(5, sizeof(*ptr));
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
// 	ptr = ft_calloc(0, sizeof(*ptr));
// 	printf("Pointer: %p\n", (void *)ptr);
// 	free(ptr);
// 	printf("\n3. size = 0\n");
// 	ptr = ft_calloc(5, 0);
// 	printf("Pointer: %p\n", (void *)ptr);
// 	free(ptr);
// 	printf("\n4. Overflow\n");
// 	ptr = ft_calloc((size_t)-1, 2);
// 	if (ptr)
// 		printf("Result: ERROR.\n");
// 	else
// 		printf("Result: OK (NULL).\n");
// 	free(ptr);
// 	return (0);
// }