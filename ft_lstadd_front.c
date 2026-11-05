/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:18:55 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 14:22:51 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
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
// 		ft_lstadd_front(&lst, node);
// 		offset++;
// 	}
// 	printf("lst: ");
// 	tmp = lst;
// 	while (tmp)
// 	{
// 		printf("%s -> ", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	printf("%p\n", (void *)tmp);
// 	ft_lstclear(&lst, free);
// 	return (0);
// }