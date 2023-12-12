/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 02:49:05 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/13 02:46:39 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
}
// void offsetContent(unsigned int x, char *content)
// {
// 	*content = *(content + 2);
// }
// int main(void)
// {
// 	char str[] = "idekanymore";
// 	ft_striteri(str, offsetContent); //Output: ekanymore
// 	printf("%s\n", str);
// }
	// My function just does str + 2
