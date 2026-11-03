/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:44:49 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/03 23:10:46 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s);
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, len + 1);
	return (str);
}

// int	main(void)
// {
// 	char	*str;

// 	str = NULL;
// 	printf("'str' before ft_strdup:\n%s\n", str);
// 	str = ft_strdup("Hello, World!");
// 	printf("\n'str' after ft_strdup:\n%s\n", str);
// 	return (0);
// }