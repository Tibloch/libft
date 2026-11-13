/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:23:42 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/13 00:41:03 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int     main()
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
	
/*	(void)ac;
	(void)av;
	//int	n = ft_atoi(av[1]);
	//int	n2 = n;
	char	dst[3] = "qw";
	char	dst2[3] = "qw";
	char	src[13] = "asdfghjkl";
	char	src2[13] = "asdfghjkl";

	ft_memcpy(dst, src, 0);
	printf("%s\n", dst);
	memcpy(dst2, src2, 0);
	printf("%s\n", dst2);*/

	char *dst = ft_calloc(4, sizeof(int));
	if (dst[0])
	for (int i = 0; i < 4; i++)
		printf("%d ", dst[i]);
	printf("\n");
        char *dst2 = calloc(2147483647, sizeof(int));
        if (dst2 == NULL)
		for (int j = 0; j < 2147483647; j++)
                	printf("%d, ", dst2[j]);

}
