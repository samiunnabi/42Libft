/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 07:36:52 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/13 02:32:05 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strtrim trims from the start and end of the string only
// it doesnt trim if the set is in the middle of the string

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s || !set)
		return (NULL);
	i = 0;
	while (s[i] && ft_strchr(set, s[i]))
		i++;
	j = ft_strlen(s);
	while (j > i && ft_strchr(set, s[j - 1]))
		j--;
	str = malloc(sizeof(char) * (j - i + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + i, j - i + 1);
	return (str);
}
