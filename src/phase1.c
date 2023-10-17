/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phase1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:07:16 by dyunta            #+#    #+#             */
/*   Updated: 2023/10/17 19:32:29 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int check_if_reverse_sorted(t_stack *stack);

int	phase1(t_stack *stack_A, t_stack *stack_B)
{
	int	top1_n;
	int top2_n;

	if (check_if_sorted(stack_A) == -1)
		return (-1);
	if (!check_if_sorted(stack_A))
		return (0);
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
	return (0);
}

int	phase2(t_stack *stack_A, t_stack *stack_B)
{
	int	top1_n;
	int top2_n;

	if (!check_if_reverse_sorted(stack_B))
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
	return (0);
}

int check_if_reverse_sorted(t_stack *stack)
{
	int i;
	int last_n;
	int current_n;

	i = 0;
	while (i < stack->top1)
	{
		last_n = stack->p[i];
		current_n = stack->p[++i];
		if (last_n > current_n)
			return (1);
	}
	return (0);
}

int check_if_sorted(t_stack *stack)
{
	int i;
	int last_n;
	int current_n;

	i = 0;
	while (i++ < stack->top1)
	{
		last_n = stack->p[i - 1];
		current_n = stack->p[i];
		if (last_n < current_n)
			return (1);
		else if (last_n == current_n)
			return (-1);
	}
	return (0);
}
