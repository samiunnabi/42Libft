/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:19:47 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/13 03:25:10 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// I make a new empty list and i malloc a new node
// In that new node I set its value to be the content that *lst is pointing to (first node) with function applied on it
// I then add it to my new list using add back
// Then I set *lst to point to the next node
// I keep doing this till I have a new list all with new nodes which contain contents with functions applied on them
// Then i return the new list

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = (t_list *)malloc(sizeof(t_list));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node->content = (*f)(lst->content);
		new_node->next = NULL;
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
// void *offsetContent(void *content)
// {
// 	content = content + 2;
// 	return(content);
// }
// int main(void)
// {
// 	t_list *node1 = ft_lstnew(ft_strdup("bruh"));
// 	t_list *node2 = ft_lstnew(ft_strdup("zxda"));
// 	t_list *node3 = ft_lstnew(ft_strdup("qweqwe"));

// 	ft_lstadd_back(&node1, node2);
// 	ft_lstadd_back(&node1, node3);

// 	t_list *new = ft_lstmap(node1, offsetContent, free);
// 	while(new)
// 	{
// 		printf("%s\n", new->content);
// 		new = new->next;
// 	}
// }

