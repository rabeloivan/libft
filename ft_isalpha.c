/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:02 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/03 22:15:25 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
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
// 			printf("%c — %d\n", argv[offset][0], ft_isalpha(argv[offset][0]));
// 		offset++;
// 	}
// 	return (0);
// }