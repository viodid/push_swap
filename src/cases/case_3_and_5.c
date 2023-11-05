/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 01:08:47 by dyunta            #+#    #+#             */
/*   Updated: 2023/11/05 17:16:49 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	case_3(t_stack *stack)
{
	int	a;
	int	b;
	int	c;

	a = stack->p[stack->top1];
	b = stack->p[stack->top2];
	c = stack->p[stack->top2 - 1];
	assert(stack->top1  == 2);
	assert(stack->top2 - 1 == 0);
	if (!check_ascending_order(stack))
		return ;
	if (a > b && c > b && c > a)
		swap(stack, "sa");
	else if ((a > b && c > b && a > c) || (a > b && b > c))
		rotate(stack, "ra");
	else if (b > a && b > c)
		reverse_rotate(stack, "rra");
	case_3(stack);
}

void	case_5(t_stack *stack_a, t_stack *stack_b)
{
	if (!check_ascending_order(stack_a))
		return ;
	take_nbr_to_top(stack_a, "a", get_smallest_nbr(stack_a));
	push(stack_a, stack_b, "pb");
	take_nbr_to_top(stack_a, "a", get_smallest_nbr(stack_a));
	push(stack_a, stack_b, "pb");
	case_3(stack_a);
	push(stack_b, stack_a, "pa");
	push(stack_b, stack_a, "pa");
}