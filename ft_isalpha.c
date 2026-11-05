/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:02 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 17:40:45 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// int	main(int argc, char **argv)
// {
// 	char			*str;
// 	size_t			offset;
// 	unsigned char	c;

// 	if (argc != 2)
// 	{
// 		printf("Usage: %s <string>\n", argv[0]);
// 		return (1);
// 	}
// 	str = argv[1];
// 	offset = 0;
// 	while (str[offset])
// 	{
// 		c = (unsigned char)str[offset];
// 		printf("%d (%c) = %d\n", c, c, ft_isalpha(c));
// 		offset++;
// 	}
// 	return (0);
// }