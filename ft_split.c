/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:11:19 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/30 21:02:20 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	len;
	int	new_word;
	int	count;

	len = 0;
	new_word = 1;
	count = 0;
	while (s[len])
	{
		if (s[len] != c)
		{
			if (new_word)
				count++;
			new_word = 0;
		}
		else
			new_word = 1;
		len++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		n_words;
	char	**result;
	int		len;
	int		word_len;

	if (!s)
		return (NULL);
	n_words = ft_count_words(s, c);
	result = (char **)ft_calloc(n_words, sizeof(char *));
	if (!result)
		return (NULL);
	len = 0;
	while (len < n_words)
	{
		while (*s == c && *s)
			s++;
		word_len = 0;
		while (s[word_len] != c && s[word_len])
			word_len++;
		result[len] = (char *)ft_calloc(word_len + 1, sizeof(char));
		if (!result[len])
		{
			while (len--)
				free(result[len]);
			free(result);
			return (NULL);
		}
		ft_strlcpy(result[len], s, word_len + 1);
		s += word_len;
		len++;
	}
	return (result);
}

int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("    um,    dois, tres,quatro  ", ',');
	i = 0;
	while (result[i])
	{
		printf("result[%d] = %s\n", i, result[i]);
		i++;
	}
	printf("result[%d] = %s\n", i, result[i]);
	return (0);
}