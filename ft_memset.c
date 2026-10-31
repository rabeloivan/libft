/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:52:19 by irabelo           #+#    #+#             */
/*   Updated: 2026/10/30 23:21:03 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	uc;
	size_t			offset;

	str = (unsigned char *)s;
	uc = (unsigned char)c;
	offset = 0;
	while (offset < n)
		str[offset++] = uc;
	return (s);
}
