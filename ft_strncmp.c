/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:37 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/29 11:00:58 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	len = 0;
	while (len < n && (s1[len] || s2[len]))
	{
		if (s1[len] != s2[len])
			return ((unsigned char)s1[len] - (unsigned char)s2[len]);
		len++;
	}
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	size_t	n;
// 	size_t	i;

// 	if (argc != 3)
// 		return (1);
// 	n = 5;
// 	i = 0;
// 	while (i < n && (argv[1][i] || argv[2][i]))
// 	{
// 		if (argv[1][i] != argv[2][i])
// 			break ;
// 		i++;
// 	}
// 	printf("%d - %d = ", argv[1][i], argv[2][i]);
// 	printf("%d\n", ft_strncmp(argv[1], argv[2], n));
// 	return (0);
// }