/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 00:04:20 by dyunta            #+#    #+#             */
/*   Updated: 2023/10/23 21:24:02 by dyunta           ###   ########.fr       */
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

int		check_num_arg(int argc, char *argv[]);
int		count_args(char **argv);
int check_repeated_arg(t_stack *stack);
t_stack	*populate_stack(int argc, char *argv[], t_stack *stack_s);
t_stack	*create_stack(const int arg_len);
void	swap(t_stack *stack, char *name);
void	double_swap(t_stack *stack_A, t_stack *stack_B);
void	push(t_stack *stack_src, t_stack *stack_dst, char *name);
void	rotate(t_stack *stack, char *name);
void	double_rotate(t_stack *stack1, t_stack *stack2);
void	reverse_rotate(t_stack *stack, char *name);
void	double_reverse_rotate(t_stack *stack1, t_stack *stack2);
void	phase1(t_stack *stack_A, t_stack *stack_B);
void	phase2(t_stack *stack_A, t_stack *stack_B);
int		check_if_sorted(t_stack *stack);

#endif
