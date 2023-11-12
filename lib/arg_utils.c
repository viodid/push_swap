/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 20:47:39 by dyunta            #+#    #+#             */
/*   Updated: 2023/11/02 21:04:10 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <libft.h>

/*
	Check whether the args in argv are numbers.
	Returns 1 if fails the check.
*/
int	check_num_arg(int argc, char *argv[])
{
	while (--argc >= 0)
	{
		ft_strtol(argv[argc]);
		if (errno != 0 || *argv[argc] == '\0')
		{
			ft_putendl_fd("Error", 2);
			return (1);
		}
	}
	return (0);
}

int	check_repeated_arg(t_stack *stack)
{
	int	*arr;
	int	i;
	int	size;

	size = stack->top1 + 1;
	arr = (int *) malloc(sizeof(int) * size);
	i = 0;
	while (i <= stack->top1)
	{
		arr[i] = stack->p[i];
		i++;
	}
	if (selection_sort(arr, size))
	{
		ft_putendl_fd("Error", 2);
		free(arr);
		return (1);
	}
	free(arr);
	return (0);
}

int	selection_sort(int *arr, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				return (1);
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (0);
}
