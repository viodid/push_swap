/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 22:54:32 by dyunta            #+#    #+#             */
/*   Updated: 2023/11/09 19:03:45 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static int	*create_and_sort_arr(const int *src_arr, int size);
static int	get_nbr_in_chunk(t_stack *stack, int key_nbr);
static int	get_key_nbr(int size, int *sort_arr, int threshold);

void	case_all(t_stack *stack_a, t_stack *stack_b, int size, int threshold)
{
	int	*sort_arr;
	int	i;
	int	initial_threshold;

	sort_arr = create_and_sort_arr(stack_a->p, size);
	i = 0;
	initial_threshold = threshold;
	while (stack_a->top1 >= 0)
	{
		while (i < threshold)
		{
			i++;
			take_nbr_to_top(stack_a, "a",
				get_nbr_in_chunk(stack_a,
					get_key_nbr(size, sort_arr, threshold)));
			push(stack_a, stack_b, "pb");
		}
		threshold += initial_threshold;
	}
	while (stack_b->top1 >= 0)
	{
		take_nbr_to_top(stack_b, "b", get_biggest_nbr(stack_b));
		push(stack_b, stack_a, "pa");
	}
	free(sort_arr);
}

/*
 * Allocates enough space and returns a new arr with src numbers sorted
 * in increasing order.
 * O(n^2)
 */
static int	*create_and_sort_arr(const int *src_arr, int size)
{
	int	*dst_arr;
	int	i;

	dst_arr = (int *) malloc(sizeof(int) * size);
	if (!dst_arr)
		return (NULL);
	i = 0;
	while (i <= size - 1)
	{
		dst_arr[i] = src_arr[i];
		i++;
	}
	selection_sort(dst_arr, size);
	return (dst_arr);
}

/*
 * Takes a t_stack and an int, and returns the idx of the least expensive number
 * in terms of movements to move it to the top of the stack.
 * The number's idx is not bigger than key_nbr.
 * Returns -1 if it cannot find an index under key_nbr.
 */
static int	get_nbr_in_chunk(t_stack *stack, int key_nbr)
{
	int	i;
	int	idx;

	i = 0;
	idx = 0;
	while (i <= stack->top1)
	{
		if (stack->p[i++] <= key_nbr)
		{
			idx = i - 1;
			break ;
		}
	}
	i = stack->top1;
	while (i >= 0)
	{
		if (stack->p[i--] <= key_nbr)
		{
			if (get_nbr_movements(stack, idx) + 1
				> get_nbr_movements(stack, i + 1))
				return (i + 1);
			return (idx);
		}
	}
	return (-1);
}

static int	get_key_nbr(int size, int *sort_arr, int threshold)
{
	if (size > threshold)
		return (sort_arr[threshold - 1]);
	return (sort_arr[size - 1]);
}
