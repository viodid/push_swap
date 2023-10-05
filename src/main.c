/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 22:54:32 by dyunta            #+#    #+#             */
/*   Updated: 2023/10/05 21:01:53 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <libft.h>

// TODO: check if args are repeated
int	main(int argc, char *argv[])
{
	if (argc <= 1)
		return (1);
	if (check_arg(argc, argv))
		return (1);
	while (argc-- > 0)
	{
		printf("%s\n", argv[argc]);
	}
	return (0);
}
