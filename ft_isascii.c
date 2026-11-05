/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:11 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 11:14:36 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int	main(int argc, char **argv)
// {
// 	int				offset;
// 	unsigned char	c;

// 	if (argc < 2)
// 	{
// 		printf("Usage: %s <decimal1> [decimal2 ...]\n", argv[0]);
// 		return (1);
// 	}
// 	offset = 1;
// 	while (offset < argc)
// 	{
// 		c = ft_atoi(argv[offset]);
// 		printf("%d = %d\n", c, ft_isascii(c));
// 		offset++;
// 	}
// 	return (0);
// }