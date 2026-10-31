/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:43:54 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/30 23:17:16 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	offset;

	if (!little[0])
		return ((char *)big);
	little_len = ft_strlen(little);
	offset = 0;
	while (offset + little_len <= len && big[offset])
	{
		if (!ft_strncmp(big + offset, little, little_len))
			return ((char *)(big + offset));
		offset++;
	}
	return (NULL);
}
