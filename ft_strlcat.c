/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 02:17:39 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/13 01:59:33 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Just like in strlcpy we return length of dst + src
// However the concatenation is happening and to see it we need to print dst
// My first if condition checks if dstsize is smaller than the dst itself
// in which case i return what dstsize + length of src is

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize < dest_len + 1)
	{
		return (dstsize + src_len);
	}
	else if (dstsize > dest_len + 1)
	{
		while (src[i] && dest_len + 1 + i < dstsize)
		{
			dst[dest_len + i] = src[i];
			i++;
		}
		dst[dest_len + i] = '\0';
	}
	return (dest_len + src_len);
}
// int main(void)
// {
// 	char src[20] = "ReyMysterio619";
// 	char dst[20] = "Booyaka";
// 	size_t length = ft_strlcat(dst, src, 11);
// 	printf("%zu\n", length); // Output: 21 as it returns srclen + dstlen always
// 	printf("%s\n", dst); //Output: BooyakaRey
// }
