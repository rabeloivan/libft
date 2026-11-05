/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:11:40 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 12:05:03 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	total_len;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = s1_len + s2_len;
	result = ft_calloc(total_len + 1, sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, s1_len + 1);
	ft_strlcat(result, s2, total_len + 1);
	return (result);
}

// int	main(int argc, char **argv)
// {
// 	char	*result;

// 	if (argc != 3)
// 	{
// 		printf("Usage: %s <string1> <string2>\n", argv[0]);
// 		return (1);
// 	}
// 	result = ft_strjoin(argv[1], argv[2]);
// 	if (!result)
// 		return (1);
// 	printf("Result: %s\n", result);
// 	free(result);
// 	return (0);
// }