/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:23:42 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/09 23:02:55 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

int     main(int ac, char **av)
{
	(void)ac;

	__builtin_printf("%d\n", ft_strncmp(av[1], av[2], ft_atoi(av[3])));
	__builtin_printf("%d\n", strncmp(av[1], av[2], ft_atoi(av[3])));
}
