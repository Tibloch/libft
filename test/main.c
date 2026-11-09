/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 20:22:04 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/09 20:41:17 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     main(int ac, char **av)
{
        int     i = 1;

        while (ac > i)
        {
                __builtin_printf("%s = ", av[i]);
                __builtin_printf("%d\n", ft_isdigit(ft_atoi(av[i])));
                i++;
        }
}
