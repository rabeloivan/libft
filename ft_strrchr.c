/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:22:22 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/03 22:13:14 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	unsigned char	byte;
	size_t			offset;

	str = (char *)s;
	byte = (unsigned char)c;
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
// 	if (argc != 3 || !(argv[2][0] != '\0' && argv[2][1] == '\0'))
// 	{
// 		printf("Wrong number of arguments.\n");
// 		return (1);
// 	}
// 	printf("%s\n", ft_strrchr(argv[1], argv[2][0]));
// 	return (0);
// }