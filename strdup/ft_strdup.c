/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 23:48:18 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/13 00:01:04 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int	len;
	int	i;
	char	*n_str;

	i = 0;
	len = strlen(s);
	n_str = malloc(sizeof(char) * (len + 1));
	if (!n_str)
		return (NULL);
	while (s[i])
	{
		n_str[i] = s[i];
		i++;
	}
	return (n_str);
}

int	main()
{
	printf("M = %s\n", ft_strdup(""));
	printf("O = %s\n\n", strdup(""));
	
	printf("M = %s\n", ft_strdup("q"));
	printf("O = %s\n\n", strdup("q"));
	
	printf("M = %s\n", ft_strdup("qwer"));
	printf("O = %s\n\n", strdup("qwer"));
	
	printf("M = %s\n", ft_strdup("qw\0er"));
	printf("O = %s\n\n", strdup("qw\0er"));
	
	printf("M = %s\n", ft_strdup("\0qwer"));
	printf("O = %s\n\n", strdup("\0qwer"));

	//printf("M = %s\n", ft_strdup(0));
	//printf("O = %s\n\n", strdup(0));
}
