/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:11:19 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 12:00:24 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	new_word;
	size_t	count;
	size_t	offset;

	new_word = 1;
	count = 0;
	offset = 0;
	while (s[offset])
	{
		if (s[offset] != c)
		{
			if (new_word)
				count++;
			new_word = 0;
		}
		else
			new_word = 1;
		offset++;
	}
	return (count);
}

static void	ft_free_result(char **result)
{
	size_t	offset;

	offset = 0;
	while (result[offset])
	{
		free(result[offset]);
		offset++;
	}
	free(result);
}

static size_t	ft_get_word_len(char const **s, char c)
{
	size_t	len;

	while (**s == c && **s)
		(*s)++;
	len = 0;
	while ((*s)[len] != c && (*s)[len])
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	n_words;
	char	**result;
	size_t	offset;
	size_t	len;

	if (!s)
		return (NULL);
	n_words = ft_count_words(s, c);
	result = ft_calloc(n_words + 1, sizeof(char *));
	if (!result)
		return (NULL);
	offset = -1;
	while (++offset < n_words)
	{
		len = ft_get_word_len(&s, c);
		result[offset] = ft_calloc(len + 1, sizeof(char));
		if (!result[offset])
		{
			ft_free_result(result);
			return (NULL);
		}
		ft_strlcpy(result[offset], s, len + 1);
		s += len;
	}
	return (result);
}

// int	main(int argc, char **argv)
// {
// 	char	**result;
// 	size_t	offset;

// 	if (argc != 3 || argv[2][1] != '\0')
// 	{
// 		printf("Usage: %s <string> <character>\n", argv[0]);
// 		return (1);
// 	}
// 	result = ft_split(argv[1], argv[2][0]);
// 	if (!result)
// 		return (1);
// 	offset = 0;
// 	while (result[offset])
// 	{
// 		printf("result[%zu] = %s\n", offset, result[offset]);
// 		offset++;
// 	}
// 	ft_free_result(result);
// 	return (0);
// }