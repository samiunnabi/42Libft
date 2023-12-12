/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:51:26 by sun-nabi          #+#    #+#             */
/*   Updated: 2023/12/13 02:15:33 by sun-nabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

static int	islongneg(long num, char c, int sign)
{
	if (sign == -1 && (num > (LONG_MAX / 10) || (num == LONG_MAX / 10 && (c
					- '0') > 8)))
		return (-1);
	else
		return (0);
}

static int	islongpos(long num, char c, int sign)
{
	if (sign == 1 && (num > (LONG_MAX / 10) || (num == LONG_MAX / 10 && (c
					- '0') > 7)))
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (is_space(str[i]) == 1)
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] != '\0') && ft_isdigit(str[i]))
	{
		if (islongpos(result, str[i], sign))
			return (-1);
		else if (islongneg(result, str[i], sign))
			return (0);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
// int main(int ac, char **av)
// {
// 	if(ac == 2)
// 	{
// 		printf("%d\n", atoi(av[1]));
// 		printf("%d\n", ft_atoi(av[1]));
// 	}
// }
