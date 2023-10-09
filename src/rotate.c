/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 01:08:47 by dyunta            #+#    #+#             */
/*   Updated: 2023/10/09 21:37:57 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../include/libft.h"

void	rotate(t_stack *stack, char *name)
{
	int	i;
	int	top_element;

	i = stack->top1;
	top_element = stack->p[i];
	while (i > 0)
	{
		stack->p[i] = stack->p[i - 1];
		i--;
	}
	stack->p[0] = top_element;
	if (*name)
		ft_putendl_fd(name, 1);
}

void	double_rotate(t_stack *stack1, t_stack *stack2)
{
	rotate(stack1, "");
	rotate(stack2, "");
	ft_putendl_fd("rr", 1);
}

void	reverse_rotate(t_stack *stack, char *name)
{
	int	i;
	int	lower_element;

	i = 0;
	lower_element = stack->p[i];
	while (i < stack->top1)
	{
		stack->p[i] = stack->p[i + 1];
		i++;
	}
	stack->p[stack->top1] = lower_element;
	if (*name)
		ft_putendl_fd(name, 1);
}

void	double_reverse_rotate(t_stack *stack1, t_stack *stack2)
{
	reverse_rotate(stack1, "");
	reverse_rotate(stack2, "");
	ft_putendl_fd("rrr", 1);
}
