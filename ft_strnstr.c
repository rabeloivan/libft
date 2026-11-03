/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:43:54 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/03 22:11:39 by irabelo          ###   ########.fr       */
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
// 	if (argc != 3)
// 	{
// 		printf("Wrong number of arguments.\n");
// 		return (1);
// 	}
// 	printf("%s\n", ft_strnstr(argv[1], argv[2], ft_strlen(argv[1])));
// 	return (0);
// }