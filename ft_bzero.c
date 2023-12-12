/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 06:59:30 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/13 01:36:57 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i++] = 0;
	}
}
// int main(void)
// {
// 	int array[] = {1, 2, 3, 4, 5};
// 	int i = 0;
// 	ft_bzero(array, sizeof(int) * 3);
// 	while(i < 5)
// 	{
// 		printf("%d\n", array[i++]);
// 	}
// }
