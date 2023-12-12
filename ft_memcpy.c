/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 03:08:10 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/13 01:48:45 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// in memcpy when there is overlap as in if src is "Cursusiscool" and dst is src + 2
// which means dst is "rsusiscool" as it is src + 2
// memcpy copies frontwards so it does destructive copying
// what happens is since its from src to dst and im copying 6 bytes from src to dst
// r -> C
// s -> u
// u -> C (u was supposed to get r as the value but since r was changed to C its C)
// s -> u (s was supposed to get s as the value but it gets u as it was changed)
// Output string of dst is "CuCuCucool";
// this is because dst is "rsusiscool and 6 bytes of it gets modified";
// this problem of overlapping is solved by memmove by backwards copying;

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*destbytes;
	char	*srcbytes;

	i = 0;
	destbytes = (char *)dst;
	srcbytes = (char *)src;
	if (!dst && !src)
	{
		return (NULL);
	}
	while (i < n)
	{
		destbytes[i] = srcbytes[i];
		i++;
	}
	return (destbytes);
}

// int main(void)
// {
// 	char src[] = "Cursusiscool";
// 	char *dst = src + 2;
// 	printf("%s", ft_memcpy(dst, src, 6));
// }
