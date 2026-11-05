/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:10:53 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 12:05:07 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	offset;

	if (!s || !f)
		return (NULL);
	result = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!result)
		return (NULL);
	offset = 0;
	while (s[offset])
	{
		result[offset] = f((unsigned int)offset, s[offset]);
		offset++;
	}
	return (result);
}

// static char	ft_toupper_wrapper(unsigned int offset, char character)
// {
// 	(void)offset;
// 	return ((char)ft_toupper((unsigned char)character));
// }

// int	main(int argc, char **argv)
// {
// 	char	*result;

// 	if (argc != 2)
// 	{
// 		printf("Usage: %s <string>\n", argv[0]);
// 		return (1);
// 	}
// 	result = ft_strmapi(argv[1], ft_toupper_wrapper);
// 	if (!result)
// 		return (1);
// 	printf("Result: %s\n", result);
// 	free(result);
// 	return (0);
// }