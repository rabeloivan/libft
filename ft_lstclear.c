/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:19:48 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 19:16:46 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !*lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}

// int	main(int argc, char **argv)
// {
// 	t_list	*lst;
// 	t_list	*node;
// 	t_list	*tmp;
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
// 	printf("Before: ");
// 	tmp = lst;
// 	while (tmp)
// 	{
// 		printf("%s -> ", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	printf("%p\n", (void *)tmp);
// 	ft_lstclear(&lst, free);
// 	printf("After: ");
// 	tmp = lst;
// 	printf("%p\n", (void *)tmp);
// 	return (0);
// }