/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 00:04:20 by dyunta            #+#    #+#             */
/*   Updated: 2023/10/06 00:28:46 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <limits.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <errno.h>

typedef struct s_stack
{
	int		*p;
	int		top1;
	int		top2;
}	t_stack;

int		ft_strtol(const char *s);
int		check_arg(int argc, char *argv[]);
t_stack	*populate_stack(int argc, char *argv[], t_stack *stack_s);
t_stack	*create_stack(const int arg_len);

#endif
