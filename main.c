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
#include <stdio.h>
#include <ctype.h>

int     main(int ac, char **av)
{
	///////////
	//toupper//
	///////////
	
	/*(void)ac;
	printf("M_up\ns va: %c\nre va: %c\n", av[1][0], ft_toupper(av[1][0]));
	printf("O\ns va: %c\nre va: %c\n\n", av[1][0], toupper(av[1][0]));*/
	
	///////////
	//tolower//
	///////////
	
	/*(void)ac;
	printf("M_lo\ns val: %c\nre va: %c\n", av[1][0], ft_tolower(av[1][0]));
	printf("O\ns val: %c\nre va: %c\n", av[1][0], tolower(av[1][0]));*/

	//////////
	//memcpy//
	//////////
	
	(void)ac;
	int	n = ft_atoi(av[1]);
	int	n2 = n;
	char	dst[3] = "qw";
	char	dst2[3] = "qw";
	char	src[13] = "asdfghjkl";
	char	src2[13] = "asdfghjkl";

	ft_memcpy(dst, src, n);
	printf("%s\n", dst);
	memcpy(dst2, src2, n2);
	printf("%s\n", dst2);
}
