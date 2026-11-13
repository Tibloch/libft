/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 20:18:14 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/12 22:41:11 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main()
{
	char    dst00[] = "";
        char    dst01[] = "";
        printf("v=0 d=\"\" s=\"\"\tM = %s\t", (char *)ft_memmove(dst00, "", 0));
        printf("O = %s\n", (char *)memmove(dst01, "", 0));
        printf("\n");

        char    dst10[] = "dest";
        char    dst11[] = "dest";
        printf("v=0 d=dest s=\"\"\tM = %s\t", (char *)ft_memmove(dst10, "", 0));
        printf("O = %s\n", (char *)memmove(dst11, "", 0));
        printf("\n");

	char    dst20[] = "";
        char    dst21[] = "";
        printf("v=0 d=\"\" s=src\tM = %s\t", (char *)ft_memmove(dst20, "src", 0));
        printf("O = %s\n", (char *)memmove(dst21, "src", 0));
        printf("\n");

        char    dst30[] = "dest";
        char    dst31[] = "dest";
        printf("v=0 d=dest s=src\tM = %s\t", (char *)ft_memmove(dst30, "src", 0));
        printf("O = %s\n", (char *)memmove(dst31, "src", 0));
        printf("\n");

        /*char    dst40[] = "";				//can't compile
        char    dst41[] = "";
        printf("v=3 d=\"\" s=\"\"\tM = %s\t", (char *)ft_memmove(dst40, "", 3));
        printf("O = %s\n", (char *)memmove(dst41, "", 3));
        printf("\n");*/

        char    dst50[] = "dest";
        char    dst51[] = "dest";
        printf("v=3 d=dest s=\"\"\tM = %s\t", (char *)ft_memmove(dst50, "", 3));
        printf("O = %s\n", (char *)memmove(dst51, "", 3));
        printf("\n");

        /*char    dst60[] = "";
        char    dst61[] = "";
        printf("v=0 d= s=src\tM = %s\t", (char *)ft_memmove(dst60, "src", 3));
        printf("O = %s\n", (char *)memmove(dst61, "src", 3));
        printf("\n");*/				//can't compile

        char    dst70[] = "destination";
        char    dst71[] = "destination";
        printf("v=3 d=destination s=source\tM = %s\t", (char *)ft_memmove(dst70, "source", 3));
        printf("O = %s\n", (char *)memmove(dst71, "source", 3));
        printf("\n");

        char    dst80[] = "destination";
        char    dst81[] = "destination";
        printf("v=12 d=destination s=source\tM = %s\t", (char *)ft_memmove(dst80, "source", 12));
        printf("O = %s\n", (char *)memmove(dst81, "source", 12));
        printf("\n");






}
