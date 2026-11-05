/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:03:49 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 18:47:50 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	unsigned char	byte;
	size_t			offset;

	str = (char *)s;
	byte = (unsigned char)c;
	offset = 0;
	while (str[offset])
	{
		if ((unsigned char)str[offset] == byte)
			return (str + offset);
		offset++;
	}
	if (byte == '\0')
		return (str + offset);
	return (NULL);
}

// int	main(int argc, char **argv)
// {
// 	char	*result;

// 	if (argc != 3 || argv[2][1] != '\0')
// 	{
// 		printf("Usage: %s <string> <character>\n", argv[0]);
// 		return (1);
// 	}
// 	result = ft_strchr(argv[1], (unsigned char)argv[2][0]);
// 	if (result)
// 		printf("Found at offset %td: %s\n", result - argv[1], result);
// 	else
// 		printf("Not found.\n");
// 	return (0);
// }