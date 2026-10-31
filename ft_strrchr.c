/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:22:22 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/31 21:00:48 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	unsigned char	byte;
	size_t			offset;

	str = (char *)s;
	byte = (unsigned char)c;
	offset = ft_strlen(s);
	if (byte == '\0')
		return (str + offset);
	while (offset--)
	{
		if ((unsigned char)str[offset] == byte)
			return (str + offset);
	}
	return (NULL);
}
