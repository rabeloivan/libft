/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:14 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 11:11:36 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
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
// 		printf("%d (%c) = %d\n", c, c, ft_isprint(c));
// 		offset++;
// 	}
// 	return (0);
// }