/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:37 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/03 22:12:53 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	offset;

	offset = 0;
	while (offset < n && (s1[offset] || s2[offset]))
	{
		if (s1[offset] != s2[offset])
			return ((unsigned char)s1[offset] - (unsigned char)s2[offset]);
		offset++;
	}
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	size_t	len;
// 	size_t	offset;

// 	if (argc != 3)
// 	{
// 		printf("Wrong number of arguments.\n");
// 		return (1);
// 	}
// 	len = ft_strlen(argv[1]);
// 	offset = 0;
// 	while (offset < len)
// 	{
// 		if (argv[1][offset] != argv[2][offset])
// 			break ;
// 		offset++;
// 	}
// 	printf("%d (%c) - %d (%c) = %d\n", argv[1][offset], argv[1][offset],
// 		argv[2][offset], argv[2][offset], ft_strncmp(argv[1], argv[2], len));
// 	return (0);
// }