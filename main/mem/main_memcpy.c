/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmem.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 17:55:17 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/11 19:57:47 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	size_t	i = 0;
        size_t	len = 0;
	
	printf("1-----------all empty-----------1\n\n");
	char	*dst10 = ft_memcpy("", "" , 0);
	char	*dst11 = memcpy("", "", 0);
	printf("M = %s\t\t", dst10);
       	printf("O = %s\n", dst11);

	printf("\n2-----------empty src-----------2\n\n");
	
	char	*dst20 = ft_memcpy("destination", "", 0);
	char	*dst21 = memcpy("destination", "", 0);
        printf("M = %s\t\t", dst20);
        printf("O = %s\n", dst21);

	printf("\n3-----------dst > src-------------3\n\n");

	char    src3[] = "source";
	len = ft_strlen(src3);
	while (i <= len)
	{
		char	dst30[] = "destination";
		ft_memcpy(dst30, src3, i);
        	printf("size = %zu\tM = %s\t\t", i, dst30);
		char	dst31[] = "destination";
		memcpy(dst31, src3, i);
        	printf("O = %s\n\n", dst31);
		i++;
	}
	
	printf("\n4-----------dst = src-------------4\n\n");
        
	char    src4[] = "source";
        len = ft_strlen(src4);
	i = 0;
        while (i <= len)
        {   
                char    dst40[] = "destin";
                ft_memcpy(dst40, src4, i); 
                printf("size = %zu\tM = %s\t\t", i, dst40);
                char    dst41[] = "destin";
                memcpy(dst41, src4, i); 
                printf("O = %s\n\n", dst41);
                i++;
        }

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
        }
}

