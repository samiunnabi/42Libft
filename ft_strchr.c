/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 08:32:00 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/13 02:08:55 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// It checks for the first occurrence of the character c in string s
// and it returns a pointer to where it locates the character in the string

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
	{
		i++;
	}
	if (s[i] == (char)c)
	{
		return ((char *)s + i);
	}
	return (NULL);
}
// int main(void)
// {
	// printf("%s\n", ft_strchr("Bruhman", 'h')); //Output: hman
// 	char *pointer = ft_strchr("Bruhman", 'h');
// 	printf("%c\n", *pointer); //Output: h
// }
	// it returns character when i dereference pointer as pointer only
	// points to the first occurence of the character
	// It prints the letters next to it when i print as %s because
	// characters in a string are stored sequentially in memory
