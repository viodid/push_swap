/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_arg_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:29:27 by dyunta            #+#    #+#             */
/*   Updated: 2023/09/28 22:40:17 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <assert.h>

int	main(void)
{
    // Test cases
    char test_case1[] = "12345";
    char test_case2[] = "-6789";
    char test_case3[] = "  42";
    char test_case4[] = "invalid";

    // Perform tests
    long result1 = ft_strtol(test_case1);
    long result2 = ft_strtol(test_case2);
    long result3 = ft_strtol(test_case3);
    long result4 = ft_strtol(test_case4);

    // Assert the expected results
    assert(result1 == 12345);
    assert(result2 == -6789);
    assert(result3 == 42);
    assert(result4 == 0); // Non-numeric input should return 0

    // Print test results
    printf("All tests passed!\n");

    return 0;
}