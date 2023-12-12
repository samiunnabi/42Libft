/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:25:00 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/13 02:55:17 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// In arrays if we want to delete or insert something
// I have to shift all the elements to the left or the right
// But in linked lists they are not stored in subsequent memory locations
// So I do not have to encounter that problem
// A node has 2 parts: content and next(pointer to next node)

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
// int main(void)
// {
// 	t_list *node1 = ft_lstnew("bruh");
// 	printf("%s\n", node1->content);
// }
