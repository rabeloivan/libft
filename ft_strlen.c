/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:16 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/29 10:52:18 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

// int	main(int argc, char **argv)
// {
// 	int	i;

// 	i = 1;
// 	while (i < argc)
// 	{
// 		printf("%s - %zu\n", argv[i], ft_strlen(argv[i]));
// 		i++;
// 	}
// 	return (0);
// }