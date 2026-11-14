/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 00:22:10 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/14 01:45:36 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}

/*char	ft_plusone(unsigned int i, char c)
{
	if (i % 2)
		c = c + 1;
	return (c);
}

int	main()
{
	char *str = ft_strmapi("string", ft_plusone);
	printf("%s\n", str);
}*/
