/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:49:15 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/13 02:30:10 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Difference between malloc and calloc is that
// Malloc can allocate memory that has garbage values
// But calloc always zeroes it out

// ------------------------------------------------------
// In the first condition we handle overflow by stopping it before it happens
// If we do count * size > UINT_MAX then the overflow already happens
// But if we do count > (UINT_MAX / size)
// (UINT_MAX / size) gies you the maximum value count can be
// so it stops the count from even exceeding UINTMAX in the first place

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if (size && (count > (UINT_MAX / size)))
		return (NULL);
	str = malloc(count * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}
// int main(void)
// {
// 	int *arr = (int *)ft_calloc(5, sizeof(int));
// 	int i = 0;
// 	while(i < 5)
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 	}
// }
