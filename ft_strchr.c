/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:03:49 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/31 21:00:13 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	unsigned char	byte;
	size_t			offset;

	str = (char *)s;
	byte = (unsigned char)c;
	offset = 0;
	while (str[offset])
	{
		if ((unsigned char)str[offset] == byte)
			return (str + offset);
		offset++;
	}
	if (byte == '\0')
		return (str + offset);
	return (NULL);
}
