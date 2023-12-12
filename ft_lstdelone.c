/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:59:26 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/13 03:08:17 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
// int main(void)
// {
// 	t_list *node1 = ft_lstnew(ft_strdup("bruh"));
// 	t_list *node2 = ft_lstnew(ft_strdup("zxda"));
// 	t_list *node3 = ft_lstnew(ft_strdup("qweqwe"));

// 	ft_lstadd_back(&node1, node2);
// 	ft_lstadd_back(&node1, node3);

// 	ft_lstdelone(node2, free);
// 	while(node1)
// 	{
// 		printf("%s\n", node1->content);
// 		node1 = node1->next;
// 	}
// }

	// So what ft_strdup does is it mallocs space for the content part of node
	// We are already mallocing for the t_list node using lstnew but strdup additionally mallocs
	// for the content part of the node separately
	// If you dont use strdup is will segfault as you will free a pointer that wasnt allocated
	// But when you use strdup you are mallocing for content so the free is valid
