/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:09 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 17:43:19 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
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
// 		printf("%d (%c) = %d\n", c, c, ft_isalnum(c));
// 		offset++;
// 	}
// 	return (0);
// }