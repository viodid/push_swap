/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:21:34 by dyunta            #+#    #+#             */
/*   Updated: 2023/11/02 21:01:19 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	count_args(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		ft_strtol(argv[i]);
		i++;
	}
	if (errno)
		i--;
	return (i);
}