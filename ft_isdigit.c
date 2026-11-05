/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:07 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 11:12:34 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
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
// 		printf("%d (%c) = %d\n", c, c, ft_isdigit(c));
// 		offset++;
// 	}
// 	return (0);
// }