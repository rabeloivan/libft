/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:11:30 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 12:05:11 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > 0 && ft_strrchr(set, s1[end - 1]))
		end--;
	if (start >= end)
		return (ft_strdup(""));
	len = end - start;
	result = ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1 + start, len + 1);
	return (result);
}

// int	main(int argc, char **argv)
// {
// 	char	*result;

// 	if (argc != 3)
// 	{
// 		printf("Usage: %s <string> <charset>\n", argv[0]);
// 		return (1);
// 	}
// 	result = ft_strtrim(argv[1], argv[2]);
// 	if (!result)
// 		return (1);
// 	printf("Result: %s\n", result);
// 	free(result);
// 	return (0);
// }