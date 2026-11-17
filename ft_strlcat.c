/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:09:23 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/16 19:20:30 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;	
	size_t	len_d;
	size_t	len_s;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	i = 0;
	if (size < len_d)
		return (size + len_s);
	while (src[i] && size > len_d && (size - len_d - 1) > i)
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[len_d + i] = '\0';
	return (len_s + len_d);
}

/*#include <stdio.h>
#include <bsd/string.h>

int	main()
{
        char    dst10[] = "destination";
        int len = ft_strlcat(dst10, NULL, 6);
        printf("S=6 d=\"\" s=\"\"\tM = %s\tV = %d\n", dst10, len);
        char    dst11[] = "";
        len = strlcat(dst11, NULL, 6);
        printf("S=6 d=\"\" s=\"\"\tO = %s\tV = %d\n\n", dst11, len);

        char    *dst20 = NULL;
        int len = ft_strlcat(dst20, "source", 6);
        printf("S=6 d=\"\" s=\"\"\tM = %s\tV = %d\n", dst20, len);
        char    *dst21 = NULL;
        len = strlcat(dst21, "source", 6);
        printf("S=6 d=\"\" s=\"\"\tO = %s\tV = %d\n\n", dst21, len);

}*/
