/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:11:07 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 19:03:29 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_alloc_len(long num)
{
	size_t	len;

	if (!num)
		return (1);
	len = 0;
	if (num < 0)
	{
		num = -num;
		len++;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	len;
	char	*result;

	num = (long)n;
	len = ft_get_alloc_len(num);
	result = ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	if (num < 0)
		num = -num;
	result[len] = '\0';
	while (len--)
	{
		if (n < 0 && !len)
		{
			result[len] = '-';
			break ;
		}
		result[len] = (num % 10) + '0';
		num /= 10;
	}
	return (result);
}

// int	main(int argc, char **argv)
// {
// 	int		n;
// 	char	*result;

// 	if (argc != 2)
// 	{
// 		printf("Usage: %s <number>\n", argv[0]);
// 		return (1);
// 	}
// 	n = ft_atoi(argv[1]);
// 	result = ft_itoa(n);
// 	printf("Input: %s\n", argv[1]);
// 	printf("Result: %s\n", result);
// 	free(result);
// 	return (0);
// }