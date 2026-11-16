/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 23:48:18 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/16 02:29:33 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*n_str;
	int		i;

	i = 0;
	n_str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!n_str)
		return (NULL);
	while (s[i])
	{
		n_str[i] = s[i];
		i++;
	}
	n_str[i] = '\0';
	return (n_str);
}

/*#include <stdio.h>
#include <string.h>

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
}*/
