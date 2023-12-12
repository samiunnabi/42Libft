/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:53:32 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/13 02:37:30 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// In my free function i have the value of i - 1 so i get the string before NULL
// I store the value of i to j so both have value of the last string's index
// Suppose I have 3 strings "bruh", "ok" & "man"
// If the 2nd one failed then my j would enter the loop and j--
// When it gets to the 2nd one and sees that its NULL
// How do I go back to the 3rd one again?
// My i also has the value of the last string so then I use i to free from the
// last string all the way up and I free every string and then the whole array

char	**ft_free_failed(char **str, int i)
{
	int	j;

	j = i;
	while (j >= 0)
	{
		if (str[j] == NULL)
		{
			while (i >= 0)
			{
				if (str[i] != NULL)
					free(str[i]);
				i--;
			}
			free(str);
			return (NULL);
		}
		j--;
	}
	return (str);
}

size_t	word_counter(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}
// Over here in the first malloc you are mallocing for an array of pointers to strings
// the pointers do not know how big the strings are yet
// I malloc for the strings themselves later on using ft_substr
// i is my index for the strings so 3 strings means i = 3

char	**ft_split(const char *s, char c)
{
	int		i;
	size_t	len;
	char	**split_str;

	if (!s)
		return (0);
	split_str = malloc(sizeof(char *) * (word_counter(s, c) + 1));
	if (!split_str)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			split_str[i] = ft_substr(s - len, 0, len);
			i++;
		}
		else
			s++;
	}
	split_str[i] = NULL;
	return (ft_free_failed(split_str, i - 1));
}

// int main(void)
// {
// 	char *str = "This is Murica";
// 	char c = ' ';
// 	char **result = ft_split(str, c);
// 	int i = 0;
// 	while(result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}
// }
