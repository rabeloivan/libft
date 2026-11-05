/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:31 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/04 20:34:40 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

// int	main(int argc, char **argv)
// {
// 	char	*str;
// 	size_t	offset;

// 	if (argc != 2)
// 	{
// 		printf("Usage: %s <string>\n", argv[0]);
// 		return (1);
// 	}
// 	str = argv[1];
// 	printf("Before: %s\nAfter: ", str);
// 	offset = 0;
// 	while (str[offset])
// 	{
// 		printf("%c", ft_toupper((unsigned char)str[offset]));
// 		offset++;
// 	}
// 	printf("\n");
// 	return (0);
// }