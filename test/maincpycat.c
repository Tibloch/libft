/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:23:42 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/09 22:44:30 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

int     main(int ac, char **av)
{
	(void)ac;
	size_t	i = 0;
	size_t	n = ft_atoi(av[5]);

	while (i >= 0)
	{
		__builtin_printf("len = %zu\ndst = %s\n", ft_strlcpy(av[1], av[2], n), av[1]);
		i++;
	}
	while (i >= 0)
        {
                __builtin_printf("len = %zu\ndst = %s\n \n", ft_strlcpy(av[1], av[2], n), av[1]);
                i++;
        }
}
