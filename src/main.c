/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 22:54:32 by dyunta            #+#    #+#             */
/*   Updated: 2023/11/10 20:32:02 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <libft.h>

// TODO: CHECK FOR; LEAKS, MAKEFILE RELINK

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		free_argv;

	free_argv = 0;
	if (argc <= 1)
		return (1);
	argv = &argv[1];
	if (argc == 2)
	{
		argv = ft_split(argv[0], ' ');
		free_argv = 1;
	}
	argc = count_args(argv);
	if (check_num_arg(argc, argv, free_argv))
		return (1);
	stack_a = populate_stack(argc, argv, create_stack(argc));
	stack_b = create_stack(argc);
	if (check_repeated_arg(stack_a, stack_b, free_argv, argv))
		return (1);
	handle_cases(stack_a, stack_b, argc);
	free_stacks_argv(stack_a, stack_b, free_argv, argv);
	return (0);
}
