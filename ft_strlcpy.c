/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:28 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/30 20:05:11 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	if (size > 0)
	{
		while (len < size - 1 && src[len])
		{
			dst[len] = src[len];
			len++;
		}
		dst[len] = '\0';
	}
	while (src[len])
		len++;
	return (len);
}

// int	main(int argc, char **argv)
// {
// 	char	dst[10];
// 	int		i;
// 	size_t	len;

// 	i = 1;
// 	while (i < argc)
// 	{
// 		len = ft_strlcpy(dst, argv[i], sizeof(dst));
// 		printf("dst = %s\nsrc = %s\nlen = %zu\n", dst, argv[i], len);
// 		if ((i + 1) < argc)
// 			printf("\n");
// 		i++;
// 	}
// 	return (0);
// }