/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_arg_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:29:27 by dyunta            #+#    #+#             */
/*   Updated: 2023/10/02 20:28:49 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "../include/push_swap.h"
//
//int	main(void)
//{
//	// Test cases
//	char test_case1[] = "12345";
//	char test_case2[] = "-6789";
//	char test_case3[] = "  42";
//	char test_case4[] = "invalid";
//
//	// Perform tests
//	long result1 = ft_strtol(test_case1);
//	long result2 = ft_strtol(test_case2);
//	long result3 = ft_strtol(test_case3);
//	long result4 = ft_strtol(test_case4);
//
//	// Assert the expected results
//	assert(result1 == 12345);
//	assert(result2 == -6789);
//	assert(result3 == 42);
//	assert(result4 == -1); // Non-numeric input should return -1
//	printf("All tests passed for ft_strtol!\n");
//
//	// Tests for check_arg
//	char *args1[] = {"./test", "123", "-456", "789", NULL};
//	assert(check_arg(4, args1) == 0);
//
//	char *args2[] = {"./test", "123", "456", "789", NULL};
//	assert(check_arg(4, args2) == 0);
//
//	char *args3[] = {"./test", "123", "456", "789", "abc", NULL};
//	assert(check_arg(5, args3) == 1);
//
//	char *args4[] = {"./test", "123", "456", "789", "2147483648", NULL};
//	assert(check_arg(5, args4) == 0);
//
//	char *args5[] = {"./test", "123", "456", "789", "-2147483649", NULL};
//	assert(check_arg(5, args5) == 0);
//
//	printf("All tests passed for check_arg!\n");
//	return (0);
//}
