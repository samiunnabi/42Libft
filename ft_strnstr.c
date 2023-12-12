/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:36:29 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/13 02:15:07 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Find the whole needle in the haystack
// and return a pointer to the first character of the first occurence
// of the needle in the haystack

// I set j = 0 as in example haystack = "Foo Bar Baz" and needle = "Baz"
// When i iterate through Bar (which is almost like Baz but its not the needle)
// and when i get the r and realise its not the needle
// It resets j's counter which is for the needle to 0
// So that i can use it to compare again
// Then i use j counter to iterate through Baz after resetting it to 0

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (haystack[i] != '\0' && i < len)
	{
		while (haystack[i + j] != '\0' && haystack[i + j] == needle[j] && (i
				+ j) < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
		j = 0;
	}
	return (0);
}
