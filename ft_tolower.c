/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:33 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/30 20:05:17 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

// int	main(int argc, char **argv)
// {
// 	int	i;
// 	int	c;

// 	i = 1;
// 	while (i < argc)
// 	{
// 		if (argv[i][0] != '\0' && argv[i][1] == '\0')
// 		{
// 			c = (unsigned char)argv[i][0];
// 			printf("%c - %c\n", c, ft_tolower(c));
// 		}
// 		i++;
// 	}
// 	return (0);
// }