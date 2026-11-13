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
	//char	*str = ft_strdup("string");
	//printf("%s\n", str);
	char	*str2 = strdup("");
	printf("%s\n", str2);
	//free(str);
	//free(str2);
}
