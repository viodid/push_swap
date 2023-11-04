/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 22:54:32 by dyunta            #+#    #+#             */
/*   Updated: 2023/11/04 14:54:12 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <libft.h>

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc <= 1)
		return (1);
	argv = &argv[1];
	if (argc == 2)
		argv = ft_split(argv[0], ' ');
	argc = count_args(argv);
	if (check_num_arg(argc, argv))
		return (1);
	stack_a = populate_stack(argc, argv, create_stack(argc));
	stack_b = create_stack(argc);
	if (check_repeated_arg(stack_a))
	{
		ft_putendl_fd("Error", 2);
		return (1);
	}
	case_3(stack_a);
	free(stack_a->p);
	free(stack_b->p);
	free(stack_a);
	free(stack_b);
	return (0);
}
