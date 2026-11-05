/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:20:05 by irabelo           #+#    #+#             */
/*   Updated: 2026/11/05 14:31:52 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	void	*new_content;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	result = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, new_node);
		lst = lst->next;
	}
	return (result);
}

// static void	*ft_toupper_wrapper(void *content)
// {
// 	char	*dup;
// 	size_t	offset;

// 	dup = ft_strdup((char *)content);
// 	if (!dup)
// 		return (NULL);
// 	offset = 0;
// 	while (dup[offset])
// 	{
// 		dup[offset] = (char)ft_toupper((unsigned char)dup[offset]);
// 		offset++;
// 	}
// 	return (dup);
// }

// int	main(int argc, char **argv)
// {
// 	t_list	*lst;
// 	t_list	*node;
// 	t_list	*result;
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
// 	result = ft_lstmap(lst, ft_toupper_wrapper, free);
// 	if (!result)
// 	{
// 		ft_lstclear(&lst, free);
// 		return (1);
// 	}
// 	printf("Before: ");
// 	node = lst;
// 	while (node)
// 	{
// 		printf("%s -> ", (char *)node->content);
// 		node = node->next;
// 	}
// 	printf("%p\n", (void *)node);
// 	printf("After: ");
// 	node = result;
// 	while (node)
// 	{
// 		printf("%s -> ", (char *)node->content);
// 		node = node->next;
// 	}
// 	printf("%p\n", (void *)node);
// 	ft_lstclear(&lst, free);
// 	ft_lstclear(&result, free);
// 	return (0);
// }