/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 23:13:46 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 12:05:15 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*result;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	result = ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s + start, len + 1);
	return (result);
}

// int	main(int argc, char **argv)
// {
// 	int		start;
// 	int		len;
// 	char	*result;

// 	if (argc != 4)
// 	{
// 		printf("Usage: %s <string> <start> <len>\n", argv[0]);
// 		return (1);
// 	}
// 	start = ft_atoi(argv[2]);
// 	len = ft_atoi(argv[3]);
// 	result = ft_substr(argv[1], (unsigned int)start, (size_t)len);
// 	if (!result)
// 		return (1);
// 	printf("Result: %s\n", result);
// 	free(result);
// 	return (0);
// }