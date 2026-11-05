/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:10:39 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 19:08:00 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	offset;

	if (!s || !f)
		return ;
	offset = 0;
	while (s[offset])
	{
		f(offset, &s[offset]);
		offset++;
	}
}

// static void	ft_toupper_wrapper(unsigned int offset, char *str)
// {
// 	(void)offset;
// 	*str = (char)ft_toupper((unsigned char)*str);
// }

// int	main(int argc, char **argv)
// {
// 	char	*str;

// 	if (argc != 2)
// 	{
// 		printf("Usage: %s <string>\n", argv[0]);
// 		return (1);
// 	}
// 	str = argv[1];
// 	printf("Before: %s\n", str);
// 	ft_striteri(str, ft_toupper_wrapper);
// 	printf("After: %s\n", str);
// 	return (0);
// }