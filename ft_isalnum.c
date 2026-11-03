/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:09 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/03 22:14:46 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// int	main(int argc, char **argv)
// {
// 	int	offset;

// 	if (argc < 2)
// 	{
// 		printf("Wrong number of arguments.\n");
// 		return (1);
// 	}
// 	offset = 1;
// 	while (offset < argc)
// 	{
// 		if (argv[offset][0] != '\0' && !argv[offset][1])
// 			printf("%c — %d\n", argv[offset][0], ft_isalnum(argv[offset][0]));
// 		offset++;
// 	}
// 	return (0);
// }