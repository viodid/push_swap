/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 01:14:27 by dyunta            #+#    #+#             */
/*   Updated: 2023/10/09 21:41:57 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../include/libft.h"

/*
 * Swap the first 2 elements at the top of stack passed as argument.
 * Do nothing if there is only one or no elements.
 */
void	swap(t_stack *stack, char *name)
{
	int	tmp;

	if (stack->top2 == -1)
		return ;
	tmp = stack->p[stack->top1];
	stack->p[stack->top1] = stack->p[stack->top2];
	stack->p[stack->top2] = tmp;
	if (*name)
		ft_putendl_fd(name, 1);
}

/*
 * Swap the first 2 elements at the top of both stacks.
 * Only swaps when there is at least 2 elements.
 */
void	double_swap(t_stack *stack1, t_stack *stack2)
{
	swap(stack1, "");
	swap(stack2, "");
	ft_putendl_fd("ss", 1);
}
