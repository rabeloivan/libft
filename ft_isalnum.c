/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:09 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/30 20:04:55 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
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
// 			printf("%c - %d\n", c, ft_isalnum(c));
// 		}
// 		i++;
// 	}
// 	return (0);
// }