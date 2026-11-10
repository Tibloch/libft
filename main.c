/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:23:42 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/10 01:48:41 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

int     main(int ac, char **av)
{
	(void)ac;

	__builtin_printf("%s\n", ft_strnstr(av[1], av[2], ft_atoi(av[3])));
	__builtin_printf("%s\n", strnstr(av[1], av[2], ft_atoi(av[3])));
}
