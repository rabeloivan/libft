/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:19:18 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 14:31:06 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int	main(int argc, char **argv)
// {
// 	t_list	*lst;
// 	t_list	*node;
// 	t_list	*last;
// 	int		offset;

// 	if (argc < 2)
// 	{
// 		printf("Usage: %s <string1> [string2 ...]\n", argv[0]);
// 		return (1);
// 	}
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
// 	last = ft_lstlast(lst);
// 	printf("last: %s\n", (char *)last->content);
// 	ft_lstclear(&lst, free);
// 	return (0);
// }