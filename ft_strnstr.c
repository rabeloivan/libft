/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:43:54 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/30 20:20:07 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	size;

	if (!little[0])
		return ((char *)big);
	little_len = ft_strlen(little);
	size = 0;
	while (size + little_len <= len && big[size])
	{
		if (!ft_strncmp(big + size, little, little_len))
			return ((char *)(big + size));
		size++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strnstr("Hello, World!", "llo", 5));
// 	return (0);
// }