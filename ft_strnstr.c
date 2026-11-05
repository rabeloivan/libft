/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:43:54 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/04 21:18:37 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	offset;

	if (!little[0])
		return ((char *)big);
	little_len = ft_strlen(little);
	offset = 0;
	while (offset + little_len <= len && big[offset])
	{
		if (!ft_strncmp(big + offset, little, little_len))
			return ((char *)(big + offset));
		offset++;
	}
	return (NULL);
}

// int	main(int argc, char **argv)
// {
// 	int		len;
// 	char	*result;

// 	if (argc != 4)
// 	{
// 		printf("Usage: %s <big_string> <little_string> <len>\n", argv[0]);
// 		return (1);
// 	}
// 	len = ft_atoi(argv[3]);
// 	if (len < 0)
// 		return (1);
// 	result = ft_strnstr(argv[1], argv[2], (size_t)len);
// 	if (result)
// 		printf("Found at offset %td: %s\n", result - argv[1], result);
// 	else
// 		printf("Not found\n");
// 	return (0);
// }