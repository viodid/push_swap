/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 01:08:47 by dyunta            #+#    #+#             */
/*   Updated: 2023/11/04 18:48:10 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	case_5(t_stack *stack_a, t_stack *stack_b)
{
	if (!check_ascending_order(stack_a))
		return ;
	if (stack_a->top1 == 3)
		case_3(stack_a);


	// REMOVE
	if (stack_b->top1 == 3)
		case_3(stack_a);

}
