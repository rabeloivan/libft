/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:33 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/03 22:13:35 by irabelo          ###   ########.fr       */
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
// 			printf("%c — %c\n", argv[offset][0], ft_tolower(argv[offset][0]));
// 		offset++;
// 	}
// 	return (0);
// }