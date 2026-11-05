/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 00:33:44 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 19:09:22 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(int argc, char **argv)
// {
// 	size_t	offset;

// 	if (argc != 2)
// 	{
// 		printf("Usage: %s <string>\n", argv[0]);
// 		return (1);
// 	}
// 	offset = 0;
// 	while (argv[1][offset])
// 	{
// 		ft_putchar_fd(argv[1][offset], STDOUT_FILENO);
// 		offset++;
// 	}
// 	ft_putchar_fd('\n', STDOUT_FILENO);
// 	return (0);
// }