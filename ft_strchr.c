/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:03:49 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/29 11:51:56 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	unsigned char	uc;
	int				len;

	str = (char *)s;
	uc = (unsigned char)c;
	len = 0;
	while (str[len])
	{
		if (str[len] == uc)
			return (str + len);
		len++;
	}
	if (uc == '\0')
		return (str + len);
	return (NULL);
}

// int	main(void)
// {
// 	const char	s[] = "Hello, World!";

// 	printf("%s\n", ft_strchr(s, 'o'));
// 	printf("%p\n", (void *)ft_strchr(s, 'o'));
// 	printf("%p\n", (void *)(s + 4));
// 	return (0);
// }