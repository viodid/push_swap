/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 22:54:32 by dyunta            #+#    #+#             */
/*   Updated: 2023/10/06 00:24:24 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <libft.h>

// TODO: check if args are repeated
int	main(int argc, char *argv[])
{
	t_stack	*stack_s;

	if (argc <= 1)
		return (1);
	if (check_arg(argc, argv))
		return (1);
	stack_s = populate_stack(argc, argv, create_stack(argc - 1));
	while (--argc > 0)
	{
		printf("index: %d\n%d\n", argc, stack_s->p[argc]);
	}
	return (0);
}
