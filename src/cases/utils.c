/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 01:08:47 by dyunta            #+#    #+#             */
/*   Updated: 2023/11/04 18:56:32 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	take_smallest_to_top(t_stack *stack)
{
}

/*
 * Iterates through all the arr in t_stack and returns the smallest number idx.
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
	return ((tmp_idx - stack->top1) * -1);
}
