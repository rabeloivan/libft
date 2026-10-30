/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:11:19 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/30 20:40:33 by irabelo          ###   ########.fr       */
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
	char	*result;

	if (!s)
		return (NULL);
	n_words = ft_count_words(s, c);
	result = (char **)ft_calloc(n_words, sizeof(char *));
}

int	main(void)
{
	printf("%d\n", ft_count_words("      uma, duas, tres, quatro         ", ','));
	return (0);
}