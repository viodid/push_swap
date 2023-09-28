/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 20:47:39 by dyunta            #+#    #+#             */
/*   Updated: 2023/09/28 22:53:43 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

// int	check_arg(int argc, char *argv[])
// {
// 	if (argc <= 1)
// 	{
// 		return (1);
// 	}
// 	while (argc-- >= 0)
// 	{
// 		if (typeof(argv[argc]) != "int")
// 		{
// 			return (1);
// 		}
// 	}
// }

long	ft_strtol(const char *s, void *p)
{
	int		sign;
	long	number;

	sign = 1;
	number = 0;
	while (*s == ' ')
		s++;
	if (*s == '-')
	{
		sign *= -1;
		s++;
	}
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (number * sign);
		number *= 10;
		number += (long)(*s - 48);
		s++;
	}
	return (number * sign);
}
