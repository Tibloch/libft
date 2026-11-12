/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 17:55:17 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/12 02:57:39 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dst00[] = "";				
	char	dst01[] = "";
	printf("v=1 d=\"\" s=\"\"\tM = %s\t", (char *)ft_memcpy(dst00, "", 1));
	printf("O = %s\n", (char *)memcpy(dst01, "", 1));
	printf("\n");

        char    dst10[] = "destination";                                    
        char    dst11[] = "destination";
        printf("v=1 d=destination s=\"\"\tM = %s\t", (char *)ft_memcpy(dst10, "", 1));
        printf("O = %s\n", (char *)memcpy(dst11, "", 1));
	printf("\n");

	char	dst20[] = "";
	char	dst21[] = "";
	printf("v=2 d=\"\" s=source\tM = %s\t", (char *)ft_memcpy(dst20, "source", 1));
	printf("O = %s\n", (char *)memcpy(dst21, "source", 1));
	printf("\n");

        /*char    dst20[] = "destination";
        char    dst21[] = "destination";
	int	i = 0;
	while (i < 8)
	{
		printf("v=%d d=destination s=source\tM = %s\t", i, (char *)ft_memcpy(dst20, "source", i));
		printf("O = %s\n", (char *)memcpy(dst21, "source", i));
		i++;
	}
	printf("\n");*/
	
	/*char
       





	printf("\n5-----------dst < src-------------5\n\t!!!!!check gdb!!!!!\n\n");

	///some difference with printf but not with gdb///
        char    src5[] = "sourcier";
	char    dst50[] = "dest";
	char    dst51[] = "dest";
        len = ft_strlen(src5);
        i = 0;
        while (i <= len)
        {
                ft_memcpy(dst50, src5, i);
                printf("size = %zu\tM = %s\t\t", i, dst50);
                memcpy(dst51, src5, i);
                printf("O = %s\n\n", dst51);
                i++;
        }
        
	
	printf("\n6-----------empy dst-------------6\n\t!!!!!check gdb!!!!!\n\n");

        char    src6[] = "sourcier";
        char    dst60[] = "";
        char    dst61[] = "";
        len = ft_strlen(src6);
        i = 0;
        while (i <= len)
        {
                ft_memcpy(dst60, src6, i);
                printf("size = %zu\tM = %s\t\t", i, dst60);
                memcpy(dst61, src6, i);
                printf("O = %s\n\n", dst61);
                i++;
        }*/
}

