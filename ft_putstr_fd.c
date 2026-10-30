/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 00:33:55 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/30 00:42:16 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		ft_putchar_fd(*s++, fd);
}

// int	main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (1);
// 	ft_putstr_fd(argv[1], 1);
// 	ft_putchar_fd('\n', 1);
// 	return (0);
// }