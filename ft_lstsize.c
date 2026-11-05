/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:19:06 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 14:30:47 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	size;

	if (!lst)
		return (0);
	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

// int	main(int argc, char **argv)
// {
// 	t_list	*lst;
// 	t_list	*node;
// 	int		offset;

// 	lst = NULL;
// 	offset = 1;
// 	while (offset < argc)
// 	{
// 		node = ft_lstnew(ft_strdup(argv[offset]));
// 		if (!node)
// 		{
// 			ft_lstclear(&lst, free);
// 			return (1);
// 		}
// 		ft_lstadd_back(&lst, node);
// 		offset++;
// 	}
// 	printf("size = %u\n", ft_lstsize(lst));
// 	ft_lstclear(&lst, free);
// 	return (0);
// }