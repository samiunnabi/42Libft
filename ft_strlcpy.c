/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:47:09 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/13 01:55:24 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// In strlcpy we return the length of src no matter what
// However the copying from src to dest is happening
// To see the copying happen we have to print dst after applying ft_strlcpy function
// strlcpy is a safer version of copying than strcpy as it ensures dstsize is big enough
// before i copy src into dst

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
// int main(void)
// {
// 	char *src = "ReyMysterio619";
// 	char *dst;
// 	size_t length = ft_strlcpy(dst, src, 12);
// 	printf("%zu\n", length); // Output: 14 as it returns srclen always
// 	printf("%s\n", dst);
		//Output: ReyMysterio 12 bytes not 11 because copies dst - 1 for NULL
// }
