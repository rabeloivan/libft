/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:18:38 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 19:12:29 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = ft_calloc(1, sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// int	main(int argc, char **argv)
// {
// 	t_list	*lst;
// 	t_list	*node;

// 	if (argc != 2)
// 	{
// 		printf("Usage: %s <string>\n", argv[0]);
// 		return (1);
// 	}
// 	lst = NULL;
// 	node = ft_lstnew(ft_strdup(argv[1]));
// 	if (!node)
// 		return (1);
// 	ft_lstadd_front(&lst, node);
// 	printf("lst: %s -> %p\n", (char *)lst->content, (void *)lst->next);
// 	ft_lstclear(&lst, free);
// 	return (0);
// }