/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 16:21:52 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/29 17:51:04 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				len;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	len = 0;
	while (len < n)
	{
		if (str1[len] != str2[len])
			return ((unsigned char)str1[len] - (unsigned char)str2[len]);
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
// 	printf("%d\n", ft_memcmp(argv[1], argv[2], n));
// 	return (0);
// }