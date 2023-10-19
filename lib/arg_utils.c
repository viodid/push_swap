/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 20:47:39 by dyunta            #+#    #+#             */
/*   Updated: 2023/10/19 20:56:02 by dyunta           ###   ########.fr       */
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
int	check_num_arg(int argc, char *argv[])
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

static int insertion_sort(int *arr, int size);
int check_repeated_arg(t_stack *stack)
{
	int	*arr;
	int i;
	int	size;

	size = stack->top1 + 1;
	arr = (int *) malloc(sizeof(int) * size);
	i = 0;
	while (i <= stack->top1)
	{
		arr[i] = stack->p[i];
		i++;
	}
	if (insertion_sort(arr, size))
	{
		free(arr);
		return (1);
	}
	free(arr);
	return (0);
}


int insertion_sort(int *arr, int size) {
	int i;
	int j;
	int key;

	i = 0;
	j = 0;
	while (j < size)
	{
		key = arr[j];
		i = j - 1;
		while (i > 0 && arr[i] > key)
		{
			arr[i + 1] = arr[i];
			i = i -1;
		}
		arr[i + 1] = key;
		j++;
		if (arr[i] == key)
			return (1);
	}
	return (0);
}
