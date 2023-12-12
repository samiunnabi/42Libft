/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 20:14:09 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/13 02:41:41 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)((unsigned int)i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// char Uppercase(unsigned int x, char c)
// {
// 	return(ft_toupper(c));
// }
// int main(void)
// {
// 	char str[] = "idekanymore";
// 	char *result = ft_strmapi(str, Uppercase);
// 	printf("%s\n", result);
// }
	// over here i used char str[] instead of char *str
	// bc u cannot modify string literals
	// a pointer points to string literals
	// an array is modifiable as it contains the string
