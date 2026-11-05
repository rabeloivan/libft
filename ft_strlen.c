/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:16 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/04 21:15:45 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

// int	main(int argc, char **argv)
// {
// 	int	offset;

// 	if (argc < 2)
// 	{
// 		printf("Usage: %s <string1> [string2 ...]\n", argv[0]);
// 		return (1);
// 	}
// 	offset = 1;
// 	while (offset < argc)
// 	{
// 		printf("%s: %zu\n", argv[offset], ft_strlen(argv[offset]));
// 		offset++;
// 	}
// 	return (0);
// }