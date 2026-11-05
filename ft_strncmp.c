/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:37 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 11:00:50 by irabelo          ###   ########.fr       */
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

// 	if (argc != 4)
// 	{
// 		printf("Usage: %s <string1> <string2> <len>\n", argv[0]);
// 		return (1);
// 	}
// 	len = ft_atoi(argv[3]);
// 	offset = 0;
// 	while (offset < len && argv[1][offset] == argv[2][offset])
// 		offset++;
// 	if (offset < len)
// 		printf("%d (%c) - %d (%c) = %d\n",
// 			argv[1][offset], argv[1][offset],
// 			argv[2][offset], argv[2][offset],
// 			ft_strncmp(argv[1], argv[2], len));
// 	else
// 		printf("0\n");
// 	return (0);
// }