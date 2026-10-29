/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:22:22 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/29 11:54:20 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	unsigned char	uc;
	int				len;

	str = (char *)s;
	uc = (unsigned char)c;
	len = ft_strlen(s);
	if (uc == '\0')
		return (str + len);
	while (len--)
	{
		if (str[len] == uc)
			return (str + len);
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	s[] = "Hello, World!";

// 	printf("%s\n", ft_strrchr(s, 'o'));
// 	printf("%p\n", (void *)ft_strrchr(s, 'o'));
// 	printf("%p\n", (void *)(s + 8));
// 	return (0);
// }