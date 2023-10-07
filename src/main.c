/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 22:54:32 by dyunta            #+#    #+#             */
/*   Updated: 2023/10/07 02:29:19 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <libft.h>

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
	swap(stack_a);
	push(stack_a, stack_b);
	swap(stack_b);
	push(stack_a, stack_b);
	swap(stack_b);
	printf("Stack A\n");
	while (--argc > 0)
		printf("index: %d\n%d\n", argc - 1, stack_a->p[argc - 1]);
	printf("Stack B\n");
	while (--argc > 0)
		printf("index: %d\n%d\n", argc - 1, stack_b->p[argc - 1]);
	return (0);
}
