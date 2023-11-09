/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 01:08:47 by dyunta            #+#    #+#             */
/*   Updated: 2023/11/09 18:51:22 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	handle_cases(t_stack *stack_a, t_stack *stack_b, int length)
{
	if (length <= 2)
		case_2(stack_a, "ra");
	else if (length <= 3)
		case_3(stack_a);
	else if (length <= 4)
		case_4(stack_a, stack_b);
	else if (length <= 5)
		case_5(stack_a, stack_b);
	else if (length <= 250)
		case_all(stack_a, stack_b, length, 20);
	else
		case_all(stack_a, stack_b, length, 50);
}
