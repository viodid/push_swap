/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyunta <dyunta@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:11:17 by dyunta            #+#    #+#             */
/*   Updated: 2023/09/28 20:36:31 by dyunta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

/*
	Takes a pointer to a str, and returns its length with the NULL char included.
*/
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

/*
	Takes a pointer to a str as an input, write it to std ouput and
	return the length of the string.
 */
size_t	ft_putstr(const char *s)
{
	size_t	len;

	len = ft_strlen(s);
	write(1, s, len);
	return (len);
}
