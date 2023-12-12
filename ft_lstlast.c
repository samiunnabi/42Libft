/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:33:35 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/13 03:00:21 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
// int main(void)
// {
// 	t_list *node1 = ft_lstnew("bruh");
// 	t_list *node2 = ft_lstnew("zxda");
// 	t_list *node3 = ft_lstnew("qweqwe");

// 	ft_lstadd_back(&node1, node2);
// 	ft_lstadd_back(&node1, node3);

// 	t_list *last_node = ft_lstlast(node1);
// 	printf("%s\n", last_node->content);
// }
