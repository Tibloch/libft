/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:23:42 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/10 23:05:44 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int     main(int ac, char **av)
{
	(void)ac;
	int	n = ft_atoi(av[5]);
	int	i = 0;
	int	len = ft_strlen(av[1]);

	ft_memcpy(av[1], av[2], n);
	while (i < len)
	{
		__builtin_printf("%c ", av[1][i]);
		i++;
	}
	__builtin_printf("\n");
	i = 0;
	len = ft_strlen(av[3]);
	memcpy(av[3], av[4], n);
	while (i < len)
	{
		__builtin_printf("%c ", av[3][i]);
		i++;
	}
}
