/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 01:08:47 by dyunta            #+#    #+#             */
/*   Updated: 2023/11/05 16:05:32 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../include/libft.h"

void take_nbr_to_top(t_stack *stack, char *name_stack, int nbr)
{
	int		i;
	char	*new_str;
	int		upper_lower;
	int 	nbr_mvn;

	upper_lower = 0;
	if (nbr >= (stack->top1 / 2))
		upper_lower = 1;
	nbr_mvn = get_nbr_movements(stack, nbr);
	i = 0;
	while (i < nbr_mvn)
	{
		if (upper_lower)
		{
			new_str = ft_strjoin("r", name_stack);
			rotate(stack, new_str);
		}
		else
		{
			new_str = ft_strjoin("rr", name_stack);
			reverse_rotate(stack, new_str);
		}
		free(new_str);
		i++;
	}
}

/*
 * Takes a t_stack and an int and returns the total number of movements
 * that would take to get that idx's number to the top of the stack
 * through the shortest path.
 */
int	get_nbr_movements(t_stack *stack, int idx)
{
	if (idx >= (stack->top1 / 2))
		return (stack->top1 - idx);
	return (idx + 1);
}

/*
 * Iterates through all the arr in t_stack and returns the idx of the smallest number.
 */
int	get_smallest_nbr(t_stack *stack)
{
	int	*arr;
	int	tmp_idx;
	int	i;

	arr = stack->p;
	i = stack->top1;
	tmp_idx = i;
	while (i >= 0)
	{
		if (arr[i] < arr[tmp_idx])
			tmp_idx = i;
		i--;
	}
	return (tmp_idx);
}

/*
 * Iterates through all the arr in t_stack and returns the idx of the smallest number.
 */
int	get_biggest_nbr(t_stack *stack)
{
	int	*arr;
	int	tmp_idx;
	int	i;

	arr = stack->p;
	i = stack->top1;
	tmp_idx = i;
	while (i >= 0)
	{
		if (arr[i] > arr[tmp_idx])
			tmp_idx = i;
		i--;
	}
	return (tmp_idx);
}
