/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_is.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 20:30:18 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/11 21:28:55 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main()
{
	printf("\n-------isalnum-------\n\n");

	printf("S=0\tM = %d\tO = %d\n", ft_isalnum('0'), isalnum('0'));
	printf("S=9\tM = %d\tO = %d\n", ft_isalnum('9'), isalnum('9'));
	printf("S=a\tM = %d\tO = %d\n", ft_isalnum('a'), isalnum('a'));
	printf("S=z\tM = %d\tO = %d\n", ft_isalnum('z'), isalnum('z'));
	printf("S=A\tM = %d\tO = %d\n", ft_isalnum('A'), isalnum('A'));
	printf("S=Z\tM = %d\tO = %d\n", ft_isalnum('Z'), isalnum('Z'));
	printf("S=/\tM = %d\tO = %d\n", ft_isalnum('/'), isalnum('/'));
	printf("S=:\tM = %d\tO = %d\n", ft_isalnum(':'), isalnum(':'));
	printf("S=@\tM = %d\tO = %d\n", ft_isalnum('@'), isalnum('@'));
        printf("S=[\tM = %d\tO = %d\n", ft_isalnum('['), isalnum('['));
        printf("S='\tM = %d\tO = %d\n", ft_isalnum('\''), isalnum('\''));
        printf("S={\tM = %d\tO = %d\n", ft_isalnum('{'), isalnum('{'));


	printf("\n-------isalpha-------\n\n");

        printf("S=@\tM = %d\tO = %d\n", ft_isalpha('@'), isalpha('@'));
        printf("S=[\tM = %d\tO = %d\n", ft_isalpha('['), isalpha('['));
        printf("S='\tM = %d\tO = %d\n", ft_isalpha('\''), isalpha('\''));
        printf("S={\tM = %d\tO = %d\n", ft_isalpha('{'), isalpha('{'));
        printf("S=a\tM = %d\tO = %d\n", ft_isalpha('a'), isalpha('a'));
        printf("S=z\tM = %d\tO = %d\n", ft_isalpha('z'), isalpha('z'));
        printf("S=A\tM = %d\tO = %d\n", ft_isalpha('A'), isalpha('A'));
        printf("S=Z\tM = %d\tO = %d\n", ft_isalpha('Z'), isalpha('Z'));


        printf("\n-------isascii-------\n\n");

        printf("S=-1\tM = %d\tO = %d\n", ft_isascii(-1), isascii(-1));
        printf("S=0\tM = %d\tO = %d\n", ft_isascii(0), isascii(0));
        printf("S=127\tM = %d\tO = %d\n", ft_isascii(127), isascii(127));
        printf("S=128\tM = %d\tO = %d\n", ft_isascii(128), isascii(128));


        printf("\n-------isdigit-------\n\n");

        printf("S=0\tM = %d\tO = %d\n", ft_isdigit('0'), isdigit('0'));
        printf("S=9\tM = %d\tO = %d\n", ft_isdigit('9'), isdigit('9'));
        printf("S=/\tM = %d\tO = %d\n", ft_isdigit(58), isdigit(58));
        printf("S=:\tM = %d\tO = %d\n", ft_isdigit(47), isdigit(47));

        
	printf("\n-------isprint-------\n\n");

        printf("S=' '\tM = %d\tO = %d\n", ft_isprint(' '), isprint(' '));
        printf("S=~\tM = %d\tO = %d\n", ft_isprint('~'), isprint('~'));
        printf("S=DEL\tM = %d\tO = %d\n", ft_isprint(127), isprint(127));
        printf("S=US\tM = %d\tO = %d\n", ft_isprint(31), isprint(31));
}
