/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:44:49 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/29 23:16:53 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*dup;

	s_len = ft_strlen(s);
	dup = (char *)ft_calloc(s_len + 1, sizeof(char));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, s_len + 1);
	return (dup);
}

// int	main(int argc, char **argv)
// {
// 	char	*dup;

// 	if (argc != 2)
// 		return (1);
// 	dup = ft_strdup(argv[1]);
// 	printf("%s\n", dup);
// 	free(dup);
// 	return (0);
// }