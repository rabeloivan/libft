/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:02 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/30 20:04:51 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
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
// 			printf("%c - %d\n", c, ft_isalpha(c));
// 		}
// 		i++;
// 	}
// 	return (0);
// }