/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phase1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:07:16 by dyunta            #+#    #+#             */
/*   Updated: 2023/10/19 20:17:48 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	phase1(t_stack *stack_A, t_stack *stack_B)
{
	int	top1_n;
	int top2_n;

	if (!check_ascending_order(stack_A))
		return ;
	while (stack_A->top1 != -1)
	{
		top1_n = stack_A->p[stack_A->top1];
		top2_n = stack_A->p[stack_A->top2];
		if (stack_A->top1 == 0)
		{
			push(stack_A, stack_B, "pb");
			break ;
		}
		if (top1_n > top2_n)
		{
			swap(stack_A, "sa");
			top1_n = stack_A->p[stack_A->top1];
		}
		if (top1_n > stack_A->p[0])
			reverse_rotate(stack_A, "rra");
		push(stack_A, stack_B, "pb");
	}
}

void	phase2(t_stack *stack_A, t_stack *stack_B)
{
	int	top1_n;
	int top2_n;

	if (!check_descending_order(stack_B))
		while (stack_B->top1 >= 0)
			push(stack_B, stack_A, "pa");
	while (stack_B->top1 != -1)
	{
		top1_n = stack_B->p[stack_B->top1];
		top2_n = stack_B->p[stack_B->top2];
		if (stack_B->top1 == 0)
		{
			push(stack_B, stack_A, "pa");
			break ;
		}
		if (top1_n < top2_n)
		{
			swap(stack_B, "sb");
			top1_n = stack_B->p[stack_B->top1];
		}
		if (top1_n < stack_B->p[0])
			rotate(stack_B, "rb");
		push(stack_B, stack_A, "pa");
	}
}

