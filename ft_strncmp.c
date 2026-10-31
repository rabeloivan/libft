/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:37 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/30 23:16:57 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	offset;

	offset = 0;
	while (offset < n && (s1[offset] || s2[offset]))
	{
		if (s1[offset] != s2[offset])
			return ((unsigned char)s1[offset] - (unsigned char)s2[offset]);
		offset++;
	}
	return (0);
}
