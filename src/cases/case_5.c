/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 01:08:47 by dyunta            #+#    #+#             */
/*   Updated: 2023/11/04 21:32:56 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	case_5(t_stack *stack_a, t_stack *stack_b)
{
	if (!check_ascending_order(stack_a))
		return ;
	take_smallest_to_top(stack_a, "a");
	push(stack_a, stack_b, "pb");
	print_stack(stack_a);
	take_smallest_to_top(stack_a, "a");
	push(stack_a, stack_b, "pb");
	print_stack(stack_a);
	case_3(stack_a);
	push(stack_b, stack_a, "pa");
	push(stack_b, stack_a, "pa");
}
