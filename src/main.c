/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 22:54:32 by dyunta            #+#    #+#             */
/*   Updated: 2023/10/09 21:49:45 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

// TODO: check if args are repeated
int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc <= 1)
		return (1);
	if (check_arg(argc, argv))
		return (1);
	stack_a = populate_stack(argc, argv, create_stack(argc - 1));
	stack_b = create_stack(argc - 1);
//	swap(stack_a);
//	push(stack_a, stack_b);
//	swap(stack_b);
//	push(stack_a, stack_b);
	swap(stack_b, "sb");
	reverse_rotate(stack_a, "rra");
	reverse_rotate(stack_a, "rra");
	push(stack_a, stack_b, "pb");
	push(stack_a, stack_b, "pb");
	double_reverse_rotate(stack_a, stack_b);
	double_rotate(stack_a, stack_b);
	double_swap(stack_a, stack_b);

	printf("Stack A\n");
	int i = argc;
	while (--i > 0)
		printf("index: %d\n%d\n", i - 1, stack_a->p[i - 1]);
	printf("Stack B\n");
	i = argc;
	while (--i > 0)
		printf("index: %d\n%d\n", i - 1, stack_b->p[i - 1]);
	free(stack_a->p);
	free(stack_b->p);
	free(stack_a);
	free(stack_b);
	return (0);
}
