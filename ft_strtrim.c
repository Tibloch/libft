/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 02:22:26 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/18 00:53:21 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (0);
		i++;
	}
	return (1);
}

static int	set_index(char const *s, char const *set, int i, int n)
{
	while (s[i] || i >= 0)
	{
		if (isset(s[i], set))
			return (i);
		if (n == 0)
			i++;
		else
			i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = set_index(s1, set, 0, 0);
	len = ft_strlen(s1);
	j = set_index(s1, set, len - 1, 1);
	len = len - (len - (j + 1)) - i;
	if (len < 0)
		len = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i <= j)
	{
		*str = s1[i];
		str++;
		i++;
	}
	*str = '\0';
	return (str - len);
}

/*#include <stdio.h>

int	main()
{
	char *str0 = ft_strtrim("hello world", " ");
	printf("%s\n", str0);
	free(str0);

	char *str1 = ft_strtrim("hello world   ", " ");
	printf("%s\n", str1);
	free(str1);

	char *str2 = ft_strtrim("   hello world", " ");
	printf("%s\n", str2);
	free(str2);

	char *str3 = ft_strtrim("   hello world   ", " ");
	printf("%s\n", str3);
	free(str3);

	char *str4 = ft_strtrim("", " ");
	printf("%s\n", str4);
	free(str4);

	char *str5 = ft_strtrim("   hello world   ", " hdl");
	printf("%s\n", str5);
	free(str5);

	char *str6 = ft_strtrim(NULL, " ");
	if (str6 != NULL)
		printf("%s\n", str6);
	free(str6);

	char *str7 = ft_strtrim("   hello world   ", NULL);
	if (str7 != NULL)
		printf("%s\n", str7);
	free(str7);

	char *str8 = ft_strtrim("      ", " ");
	printf("%s\n", str8);
	free(str8);
}*/
