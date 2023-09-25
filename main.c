/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 22:54:32 by dyunta            #+#    #+#             */
/*   Updated: 2023/09/25 21:54:55 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "include/ft_printf.h"

int	main(int argc, char *argv[])
{
	while (argc-- > 0)
	{
		printf("%s - %ld - %d\n", argv[argc], ft_strlen(argv[argc]), CONST);
	}
	return (0);
}
