/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 22:26:45 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/16 19:27:56 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(src);
	while (src[i] && size > 1)
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	if (size > 0)
		dst[i] = '\0';
	return (len);
}

/*#include <stdio.h>
#include <bsd/string.h>

int	main()
{
	//char    *dst100 = NULL;
        //int len = ft_strlcpy(dst100, "source", 5);
        //printf("S=0 d=\"\" s=\"\"\tM = %s\tV = %d\n", dst100, len);
	//char    *dst101 = NULL;
        //len = strlcpy(dst101, "source", 5);
        //printf("S=0 d=\"\" s=\"\"\tO = %s\tV = %d\n\n", dst101, len);

        char    dst110[] = "destination";
        int len = ft_strlcpy(dst110, NULL, 3);
        printf("S=3 d=\"\" s=\"\"\tM = %s\tV = %d\n", dst110, len);
        char    dst111[] = "destination";
        len = strlcpy(dst111, NULL, 3);
        printf("S=3 d=\"\" s=\"\"\tO = %s\tV = %d\n\n", dst111, len);

}*/
