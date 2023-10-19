/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 22:54:32 by dyunta            #+#    #+#             */
/*   Updated: 2023/10/19 20:58:46 by dyunta           ###   ########.fr       */
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
	if (check_num_arg(argc, argv))
		return (1);
	stack_a = populate_stack(argc, argv, create_stack(argc - 1));
	stack_b = create_stack(argc - 1);
	// FIXME: It gives an error when 0 is passed as an arg
	if (check_repeated_arg(stack_a))
	{
		ft_putendl_fd("Error", 2);
		return (1);
	}
	while (check_if_sorted(stack_a))
	{
		phase1(stack_a, stack_b);
		phase2(stack_a, stack_b);
	}

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
