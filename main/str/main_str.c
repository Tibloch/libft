/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 21:35:12 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/12 01:19:44 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

int	main()
{
	//int	len;

        /*printf("\n--------strchr-------\n\n");

        printf("S=0\tM = %s\tO = %s\n", ft_strchr("", 0), strchr("", 0));
        printf("S=a\tM = %s\tO = %s\n", ft_strchr("", 'a'), strchr("", 'a'));
        printf("S=0\tM = %s\tO = %s\n", ft_strchr("string", 0), strchr("string", 0));
        printf("S=a\tM = %s\tO = %s\n", ft_strchr("string", 'a'), strchr("string", 'a'));
        printf("S=r\tM = %s\tO = %s\n", ft_strchr("string", 'r'), strchr("string", 'r'));
        printf("S=s\tM = %s\tO = %s\n", ft_strchr("strings", 's'), strchr("strings", 's'));*/


        
	/*printf("\n--------strlcat-------\n\n");

	char	dst10[] = "";
	len = ft_strlcat(dst10, "", 0);
        printf("S=0 d=\"\" s=\"\"\tM = %s\tV = %d\n", dst10, len);
        char	dst11[] = "";
        len = strlcat(dst11, "", 0);
        printf("S=0 d=\"\" s=\"\"\tO = %s\tV = %d\n\n", dst11, len);

        char	dst20[] = ""; 
        len = ft_strlcat(dst20, "", 2);
        printf("S=2 d=\"\" s=\"\"\tM = %s\tV = %d\n", dst20, len);
        char	dst21[] = "";
        len = strlcat(dst21, "", 2);
        printf("S=2 d=\"\" s=\"\"\tO = %s\tV = %d\n\n", dst21, len);

        char	dst30[] = "";
        len = ft_strlcat(dst30, "source", 0);
        printf("S=0 d=\"\" s=source\tM = %s\tV = %d\n", dst30, len);
        char	dst31[] = "";
        len = strlcat(dst31, "source", 0);
        printf("S=0 d=\"\" s=source\tO = %s\tV = %d\n\n", dst31, len);

        char	dst40[] = "";  
        len = ft_strlcat(dst40, "source", 3);
        printf("S=3 d=\"\" s=source\tM = %s\tV = %d\n", dst40, len);
        char	dst41[] = "";
        len = strlcat(dst41, "source", 3);
        printf("S=3 d=\"\" s=source\tO = %s\tV = %d\n\n", dst41, len);

        char	dst50[] = "destination";
        len = ft_strlcat(dst50, "source", 0);
        printf("S=0 d=destination s=source\tM = %s\tV = %d\n", dst50, len);
        char	dst51[] = "destination";
        len = strlcat(dst51, "source", 0);
        printf("S=0 d=destination s=source\tO = %s\tV = %d\n\n", dst51, len);

        char	dst60[] = "destination";
        len = ft_strlcat(dst60, "source", 8);
        printf("S=8 d=destination s=source\tM = %s\tV = %d\n", dst60, len);
        char	dst61[] = "destination";
        len = strlcat(dst61, "source", 8);
        printf("S=8 d=destination s=source\tO = %s\tV = %d\n\n", dst61, len);

        char	dst70[] = "destination";
        len = ft_strlcat(dst70, "source", 15);
        printf("S=15 d=destination s=source\tM = %s\tV = %d\n", dst70, len);
        char	dst71[] = "destination";
        len = strlcat(dst71, "source", 15);
        printf("S=15 d=destination s=source\tO = %s\tV = %d\n\n", dst71, len);

        char	dst80[] = "destination";
        len = ft_strlcat(dst80, "source", 18);
        printf("S=18 d=destination s=source\tM = %s\tV = %d\n", dst80, len);
        char	dst81[] = "destination";
        len = strlcat(dst81, "source", 18);
        printf("S=18 d=destination s=source\tO = %s\tV = %d\n\n", dst81, len);

        char    dst90[] = "destination";
        len = ft_strlcat(dst90, "source", 25);
        printf("S=25 d=destination s=source\tM = %s\tV = %d\n", dst90, len);
        char    dst91[] = "destination";
        len = strlcat(dst91, "source", 25);
        printf("S=25 d=destination s=source\tO = %s\tV = %d\n\n", dst91, len);*/


        
	/*printf("\n--------strlcpy-------\n\n");

        char    dst100[] = "";
        len = ft_strlcpy(dst100, "", 0);
        printf("S=0 d=\"\" s=\"\"\tM = %s\tV = %d\n", dst100, len);
        char    dst101[] = "";
        len = strlcpy(dst101, "", 0);
        printf("S=0 d=\"\" s=\"\"\tO = %s\tV = %d\n\n", dst101, len);

        char    dst110[] = "";
        len = ft_strlcpy(dst110, "", 3);
        printf("S=3 d=\"\" s=\"\"\tM = %s\tV = %d\n", dst110, len);
        char    dst111[] = "";
        len = strlcpy(dst111, "", 3);
        printf("S=3 d=\"\" s=\"\"\tO = %s\tV = %d\n\n", dst111, len);

        char    dst120[] = "";
        len = ft_strlcpy(dst120, "source", 0);
        printf("S=0 d=\"\" s=source\tM = %s\tV = %d\n", dst120, len);
        char    dst121[] = "";
        len = strlcpy(dst121, "source", 0);
        printf("S=0 d=\"\" s=source\tO = %s\tV = %d\n\n", dst121, len);

        char    dst130[] = "";
        len = ft_strlcpy(dst130, "source", 3);
        printf("S=3 d=\"\" s=source\tM = %s\tV = %d\n", dst130, len);
        char    dst131[] = "";
        len = strlcpy(dst131, "source", 3);
        printf("S=3 d=\"\" s=source\tO = %s\tV = %d\n\n", dst131, len);

        char    dst140[] = "destination";
        len = ft_strlcpy(dst140, "source", 0);
        printf("S=0 d=destination s=source\tM = %s\tV = %d\n", dst140, len);
        char    dst141[] = "destination";
        len = strlcpy(dst141, "source", 0);
        printf("S=0 d=destination s=source\tO = %s\tV = %d\n\n", dst141, len);

        char    dst150[] = "destination";
        len = ft_strlcpy(dst150, "source", 3);
        printf("S=3 d=destination s=source\tM = %s\tV = %d\n", dst150, len);
        char    dst151[] = "destination";
        len = strlcpy(dst151, "source", 3);
        printf("S=3 d=destination s=source\tO = %s\tV = %d\n\n", dst151, len);

        char    dst160[] = "destination";
        len = ft_strlcpy(dst160, "source", 6);
        printf("S=6 d=destination s=source\tM = %s\tV = %d\n", dst160, len);
        char    dst161[] = "destination";
        len = strlcpy(dst161, "source", 6);
        printf("S=6 d=destination s=source\tO = %s\tV = %d\n\n", dst161, len);

        char    dst170[] = "destination";
        len = ft_strlcpy(dst170, "source", 7);
        printf("S=7 d=destination s=source\tM = %s\tV = %d\n", dst170, len);
        char    dst171[] = "destination";
        len = strlcpy(dst171, "source", 7);
        printf("S=7 d=destination s=source\tO = %s\tV = %d\n\n", dst171, len);

        char    dst180[] = "destination";
        len = ft_strlcpy(dst180, "source", 8);
        printf("S=8 d=destination s=source\tM = %s\tV = %d\n", dst180, len);
        char    dst181[] = "destination";
        len = strlcpy(dst181, "source", 8);
        printf("S=8 d=destination s=source\tO = %s\tV = %d\n\n", dst181, len);

        char    dst190[] = "destination";
        len = ft_strlcpy(dst190, "", 0);
        printf("S=0 d=destination s= \tM = %s\tV = %d\n", dst190, len);
        char    dst191[] = "destination";
        len = strlcpy(dst191, "", 0);
        printf("S=0 d=destination s= \tO = %s\tV = %d\n\n", dst191, len);

        char    dst1100[] = "destination";
        len = ft_strlcpy(dst1100, "", 5);
        printf("S=5 d=destination s= \tM = %s\tV = %d\n", dst1100, len);
        char    dst1101[] = "destination";
        len = strlcpy(dst1101, "", 5);
        printf("S=5 d=destination s= \tO = %s\tV = %d\n\n", dst1101, len);*/


	
	/*printf("\n--------strlen-------\n\n");

	printf("S=\"\"\tM = %zu\tO = %lu\n", ft_strlen(""), strlen(""));
	printf("S=a\tM = %zu\tO = %lu\n", ft_strlen("a"), strlen("a"));
	printf("S=string\tM = %zu\tO = %lu\n", ft_strlen("string"), strlen("string"));*/

        

	/*printf("\n-------strncmp-------\n\n");

	printf("S=0 s1=\"\" s2=\"\"\tM = %d\tO = %d\n", ft_strncmp("", "", 0), strncmp("", "", 0));
	printf("S=4 s1=\"\" s2=\"\"\tM = %d\tO = %d\n", ft_strncmp("", "", 4), strncmp("", "", 4));
	printf("S=1 s1=first s2=sec\tM = %d\tO = %d\n", ft_strncmp("first", "sec", 1), strncmp("first", "sec", 1));
	printf("S=3 s1=first s2=sec\tM = %d\tO = %d\n", ft_strncmp("first", "sec", 3), strncmp("fisrt", "sec", 3));
	printf("S=6 s1=first s2=asec\tM = %d\tO = %d\n", ft_strncmp("first", "asec", 6), strncmp("fisrt", "asec", 6));
	printf("S=2 s1=abc s2=abc\tM = %d\tO = %d\n", ft_strncmp("abc", "abc", 6), strncmp("abc", "abc", 6));*/



	printf("\n-------strnstr-------\n\n");

	printf("S=0 b=\"\" l=\"\"\tM = %s\tO = %s\n", ft_strnstr("", "", 0), strnstr("", "", 0));
	printf("S=3 b=\"\" l=\"\"\tM = %s\tO = %s\n", ft_strnstr("", "", 3), strnstr("", "", 3));
	printf("S=3 b=\"\" l=i\tM = %s\tO = %s\n", ft_strnstr("", "i", 3), strnstr("", "i", 3));
	printf("S=3 b=big l=\"\"\tM = %s\tO = %s\n", ft_strnstr("big", "", 3), strnstr("big", "", 3));
	printf("S=0 b=big l=i\tM = %s\tO = %s\n", ft_strnstr("big", "i", 0), strnstr("big", "i", 0));
	printf("S=2 b=big l=i\tM = %s\tO = %s\n", ft_strnstr("big", "i", 2), strnstr("big", "i", 2));
	printf("S=4 b=big l=i\tM = %s\tO = %s\n", ft_strnstr("big", "i", 4), strnstr("big", "i", 4));
	printf("S=3 b=string l=in\tM = %s\tO = %s\n", ft_strnstr("string", "in", 3), strnstr("string", "in", 3));
	printf("S=4 b=string l=in\tM = %s\tO = %s\n", ft_strnstr("string", "in", 4), strnstr("string", "in", 4));
	printf("S=5 b=string l=in\tM = %s\tO = %s\n", ft_strnstr("string", "in", 5), strnstr("string", "in", 5));
	printf("S=6 b=string l=ng\tM = %s\tO = %s\n", ft_strnstr("string", "ng", 6), strnstr("string", "ng", 6));
	printf("S=6 b=string l=h\tM = %s\tO = %s\n", ft_strnstr("string", "h", 6), strnstr("string", "h", 6));

	
	
	/*printf("\n--------strrchr-------\n\n");

        printf("S=0/\"\"\tM = %s\tO = %s\n", ft_strrchr("", 0), strrchr("", 0));
        printf("S=a/\"\"\tM = %s\tO = %s\n", ft_strrchr("", 'a'), strrchr("", 'a'));
        printf("S=0/string\tM = %s\tO = %s\n", ft_strrchr("string", 0), strrchr("string", 0));
        printf("S=a/string\tM = %s\tO = %s\n", ft_strrchr("string", 'a'), strrchr("string", 'a'));
        printf("S=r/string\tM = %s\tO = %s\n", ft_strrchr("string", 'r'), strrchr("string", 'r'));
        printf("S=s/strings\tM = %s\tO = %s\n", ft_strrchr("strings", 's'), strrchr("strings", 's'));*/
}
