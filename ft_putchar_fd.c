/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 00:33:44 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/30 00:44:06 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(int argc, char **argv)
// {
// 	if (argc != 2 || !(argv[1][0] != '\0' && argv[1][1] == '\0'))
// 		return (1);
// 	ft_putchar_fd(argv[1][0], 1);
// 	ft_putchar_fd('\n', 1);
// 	return (0);
// }