/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:22:22 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 11:03:06 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	byte;
	char			*str;
	size_t			offset;

	byte = (unsigned char)c;
	str = (char *)s;
	offset = ft_strlen(s);
	if (byte == '\0')
		return (str + offset);
	while (offset--)
	{
		if ((unsigned char)str[offset] == byte)
			return (str + offset);
	}
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
// 	result = ft_strrchr(argv[1], (unsigned char)argv[2][0]);
// 	if (result)
// 		printf("Found at offset %td: %s\n", result - argv[1], result);
// 	else
// 		printf("Not found.\n");
// 	return (0);
// }