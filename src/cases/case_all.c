/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 22:54:32 by dyunta            #+#    #+#             */
/*   Updated: 2023/11/05 16:25:41 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <push_swap.h>

//void	case_all(t_stack *stack_a, t_stack *stack_b, int size)
//{
//
//}

int	*create_and_sort_arr(const int *src_arr, int size)
{
	int	*dst_arr;
	int	i;

	dst_arr = (int *) malloc(sizeof(int) * size);

	i = 0;
	while (i <= size - 1)
	{
		dst_arr[i] = src_arr[i];
		i++;
	}
	selection_sort(dst_arr, size);
	return (dst_arr);
}