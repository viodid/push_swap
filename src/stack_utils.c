/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 23:29:23 by dyunta            #+#    #+#             */
/*   Updated: 2023/11/08 19:39:18 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <push_swap.h>

/*
 * Declares, initialized a t_stack with len(t_stack->p) = arg_len and returns it.
 */
t_stack	*create_stack(const int arg_len)
{
	t_stack	*stack_struct;
	int		*stack;

	stack_struct = (t_stack *) malloc(sizeof(t_stack));
	stack = (int *) malloc(sizeof(int) * arg_len);
	if (!stack_struct || !stack)
		return (NULL);
	stack_struct->p = stack;
	stack_struct->top1 = -1;
	stack_struct->top2 = -1;
	return (stack_struct);
}

/*
 * Populates and returns a t_stack type with the all the values of argv
 * but the index 0, and set the index to the last and before last elements
 * as top1 and top2 respectively.
 */
t_stack	*populate_stack(int argc, char *argv[], t_stack *stack_s)
{
	int	*stack;
	int	i;

	stack = (int *) stack_s->p;
	i = 0;
	while (--argc >= 0)
		stack[i++] = ft_strtol(argv[argc]);
	if (i > 1)
	{
		stack_s->top1 = i - 1;
		stack_s->top2 = i - 2;
	}
	else
		stack_s->top1 = i - 1;
	return (stack_s);
}

/*
 * Check whether the stack is sort in descending order.
 * Returns 1 if it's not.
 */
int	check_descending_order(t_stack *stack)
{
	int	i;
	int	last_n;
	int	current_n;

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

/*
 * Check whether the stack is sort in ascending order.
 * Returns 1 if it's not.
 */
int	check_ascending_order(t_stack *stack)
{
	int	i;
	int	last_n;
	int	current_n;

	i = 0;
	while (i++ < stack->top1)
	{
		last_n = stack->p[i - 1];
		current_n = stack->p[i];
		if (last_n < current_n)
			return (1);
	}
	return (0);
}

void	free_stacks_argv(t_stack *stack_a, t_stack *stack_b,
	int free_argv, char **argv)
{
	free(stack_a->p);
	free(stack_a);
	free(stack_b->p);
	free(stack_b);
	if (free_argv)
		free_argv_func(argv);
}
