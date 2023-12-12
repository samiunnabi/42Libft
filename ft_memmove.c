/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:53:38 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/13 01:48:30 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Memmove solves the problem of memcpy by doing backwards copying
// In memmove I set my index to be at the very end - 1 so before null
// then i essentially copy backwards instead of frontwards in memcpy
// This way my values are not modified before i copy them as i am copying from the back

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	*destbytes;
	unsigned char	*srcbytes;

	destbytes = (unsigned char *)dst;
	srcbytes = (unsigned char *)src;
	if (destbytes > srcbytes && len > 0)
	{
		i = len - 1;
		while (i >= 0)
		{
			destbytes[i] = srcbytes[i];
			if (i == 0)
			{
				break ;
			}
			i--;
		}
	}
	else
	{
		ft_memcpy(destbytes, srcbytes, len);
	}
	return (destbytes);
}
// int main(void)
// {
// 	char src[] = "Cursusiscool";
// 	char *dst = src + 2;
// 	printf("%s\n", ft_memmove(dst, src, 6)); //Output: Cursuscool
// 	printf("%s\n", ft_memcpy(dst, src, 6)); //Output: CuCuCucool
// }
