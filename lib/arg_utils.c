/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 20:47:39 by dyunta            #+#    #+#             */
/*   Updated: 2023/10/05 21:30:05 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <libft.h>

/*
	Takes a pointer to the start of a str populated  with numbers and outputs
	the number as an integer, or -1 if any char is not a number.
	It sets the errno to ERANGE when the number is larger than INT_MAX. 
*/
int	ft_strtol(const char *s)
{
	int		sign;
	int		number;

	sign = 1;
	number = 0;
	if (*s == '\0')
		return (-1);
	if (*s == '-')
	{
		sign *= -1;
		s++;
	}
	while (*s)
	{
		if (*s < '0' || *s > '9' || *s == '\n')
			return (-1);
		if (number > (INT_MAX - (*s - '0')) / 10)
		{
			errno = ERANGE;
			return (-1);
		}
		number *= 10;
		number += (int)(*s++ - '0');
	}
	return (number * sign);
}

/*
	Check whether the args in argv are numbers.
	Returns 1 if fails the check.
*/
int	check_arg(int argc, char *argv[])
{
	while (--argc > 0)
	{
		if (errno == ERANGE || ft_strtol(argv[argc]) == -1)
		{
			ft_putendl_fd("Error", 2);
			return (1);
		}
	}
	return (0);
}
