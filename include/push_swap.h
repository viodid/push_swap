/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 00:04:20 by dyunta            #+#    #+#             */
/*   Updated: 2023/11/09 18:05:07 by dyunta           ###   ########.fr       */
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
# include <assert.h>

typedef struct s_stack
{
	int		*p;
	int		top1;
	int		top2;
}	t_stack;

void	print_stack(t_stack *stack);
void	print_arr(int *arr, int size);
int		ft_strtol(const char *s);
void	free_argv_func(char **argv);
int		check_num_arg(int argc, char *argv[], int freed_argv);
int		count_args(char **argv);
int		check_repeated_arg(t_stack *stack_a, t_stack *stack_b,
			int free_argv, char **argv);
void	free_stacks_argv(t_stack *stack_a, t_stack *stack_b,
			int free_argv, char **argv);
int		selection_sort(int *arr, int size);
t_stack	*populate_stack(int argc, char *argv[], t_stack *stack_s);
t_stack	*create_stack(int arg_len);
void	swap(t_stack *stack, char *name);
void	double_swap(t_stack *stack_A, t_stack *stack_B);
void	push(t_stack *stack_src, t_stack *stack_dst, char *name);
void	rotate(t_stack *stack, char *name);
void	double_rotate(t_stack *stack1, t_stack *stack2);
void	reverse_rotate(t_stack *stack, char *name);
void	double_reverse_rotate(t_stack *stack1, t_stack *stack2);
void	phase1(t_stack *stack_A, t_stack *stack_B);
void	phase2(t_stack *stack_A, t_stack *stack_B);
int		check_ascending_order(t_stack *stack);
int		check_descending_order(t_stack *stack);
void	handle_cases(t_stack *stack_a, t_stack *stack_b, int length);
void	case_2(t_stack *stack, char *name);
void	case_3(t_stack *stack);
void	case_4(t_stack *stack_a, t_stack *stack_b);
void	case_5(t_stack *stack_a, t_stack *stack_b);
void	case_all(t_stack *stack_a, t_stack *stack_b, int size, int threshold);
int		get_smallest_nbr(t_stack *stack);
int		get_biggest_nbr(t_stack *stack);
void	take_nbr_to_top(t_stack *stack, char *name_stack, int idx);
int		get_nbr_movements(t_stack *stack, int idx);

#endif
