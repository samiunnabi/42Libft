/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:03:58 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/13 03:00:35 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
// int main(void)
// {
// 	t_list *node1 = ft_lstnew("bruh");
// 	t_list *node2 = ft_lstnew("zxda");
// 	t_list *node3 = ft_lstnew("qweqwe");

// 	ft_lstadd_back(&node1, node2);
// 	ft_lstadd_back(&node1, node3);

// 	printf("%d\n", ft_lstsize(node1));
// }
