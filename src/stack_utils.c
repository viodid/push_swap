/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 23:29:23 by dyunta            #+#    #+#             */
/*   Updated: 2023/10/06 00:58:42 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <push_swap.h>

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

t_stack	*populate_stack(int argc, char *argv[], t_stack *stack_s)
{
	int	*stack;
	int	i;

	stack = (int *) stack_s->p;
	i = 0;
	// TODO: set top1 and top2 and use ft_strtol to get the hole number
	while (--argc > 0)
		stack[i++] = (int)*(argv[argc]) - '0';
	return (stack_s);
}
