/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 01:07:06 by dyunta            #+#    #+#             */
/*   Updated: 2023/10/09 21:36:51 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../include/libft.h"

static void	update_stack_indexes(t_stack *stack, int add);

void	push(t_stack *stack_src, t_stack *stack_dst, char *name)
{
	if (stack_src->p[stack_src->top1] == -1)
		return ;
	stack_dst->p[stack_dst->top1 + 1] = stack_src->p[stack_src->top1];
	update_stack_indexes(stack_src, 0);
	update_stack_indexes(stack_dst, 1);
	ft_putendl_fd(name, 1);
}

static void	update_stack_indexes(t_stack *stack, int add)
{
	if (add)
	{
		stack->top1 += 1;
		if (stack->top1 != 0)
			stack->top2 += 1;
	}
	else
	{
		stack->top1 -= 1;
		if (stack ->top2 != -1)
			stack->top2 -= 1;
	}
}
