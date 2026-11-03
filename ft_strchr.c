/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:03:49 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/03 22:13:24 by irabelo          ###   ########.fr       */
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
// 	if (argc != 3 || !(argv[2][0] != '\0' && argv[2][1] == '\0'))
// 	{
// 		printf("Wrong number of arguments.\n");
// 		return (1);
// 	}
// 	printf("%s\n", ft_strchr(argv[1], argv[2][0]));
// 	return (0);
// }