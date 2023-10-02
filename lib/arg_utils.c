/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 20:47:39 by dyunta            #+#    #+#             */
/*   Updated: 2023/10/02 20:28:58 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

/*
	Takes a pointer to the start of a str populated  with numbers and outputs
	the number as a long integer, or -1 if any char is not a number.
	It sets the errno to ERANGE when the number is larger than LONG_MAX. 
*/
long	ft_strtol(const char *s)
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
			return (-1);
		if (number > (LONG_MAX - (*s - '0')) / 10)
		{
			errno = ERANGE;
			return (LONG_MAX);
		}
		number *= 10;
		number += (long)(*s++ - '0');
	}
	return (number * sign);
}

/*
	Check whether the type of the argument in argv is a number.
	Returns 1 if fails the check.
*/
int	check_arg(int argc, char *argv[])
{
	if (argc <= 1)
	{
		return (1);
	}
	while (--argc > 0)
	{
		if (errno == ERANGE || ft_strtol(argv[argc]) == -1)
			return (1);
	}
	return (0);
}
