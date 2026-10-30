/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:10:53 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/30 20:24:16 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			s_len;
	char			*result;
	unsigned int	len;

	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	result = (char *)ft_calloc(s_len + 1, sizeof(char));
	if (!result)
		return (NULL);
	len = 0;
	while (s[len])
	{
		result[len] = f(len, s[len]);
		len++;
	}
	return (result);
}
