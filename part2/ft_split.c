/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 00:46:59 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/14 00:48:55 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	count_word(char const *s, char c)
{
	int	i;
	int	ct;

	i = 0;
	ct = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		if (s[i - 1] != c)
			ct++;
	}
	return (ct);
}

int	count_letter(char const *s, char c, int *j)
{
	int	ct;

	ct = 0;
	while (s[*j] == c)
		(*j)++;
	while (s[*j] && s[*j] != c)
	{
		(*j)++;
		ct++;
	}
	return (ct);
}

void	fill_array(char *str, char const *s, char c, int start)
{
	int	i;

	i = 0;
	while (s[start] && s[start] != c)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	ct_w;
	int	ct_l;
	char	**array;

	i = 0;
	j = 0;
	ct_w = count_word(s, c);
	array = malloc(sizeof(char *) * (ct_w + 1));
	if (!array)
		return (NULL);
	while (ct_w > 0)
	{
		ct_l = count_letter(s, c, &j);
		array[i] = malloc(sizeof(char) * ct_l + 1);
		if (!array[i])
			return (NULL);
		fill_array(array[i], s, c, j - ct_l);
		ct_w--;
		i++;
	}
	array[i] = NULL;
	return (array);
}

int	main()
{

	int i = 0;

	char **arr0 = ft_split(" premier ", ' ');
	while (arr0[i])
	{
		printf("%s\n", arr0[i]);
		free(arr0[i]);
		i++;
	}
	free(arr0);
	i = 0;


	/*printf("-------------\n");
	char **arr1 = ft_split("    ", ' ');
	while (arr1[i])
	{
		printf("%s\n", arr1[i]);
		free(arr1[i]);
		i++;
	}
	free(arr1);
	i = 0;



	printf("-------------\n");
	char **arr2 = ft_split("un      premier      test", ' ');
	while (arr2[i])
	{
		printf("%s\n", arr2[i]);
		free(arr2[i]);
		i++;
	}
	free(arr2);
	i = 0;


	printf("-------------\n");
	char **arr3 = ft_split("      un premier test      ", ' ');
	while (arr3[i])
	{
		printf("%s\n", arr3[i]);
		free(arr3[i]);
		i++;
	}
	free(arr3);
	i = 0;*/








	/*char **array0 = ft_split("un premier teste", ' ');
	for (int i = 0; array0[i]; i++)
	{
		printf("%s\n", array0[i]);
		free(array0[i]);
	}
	free(array0);

	printf("---------------\n");
	char **array1 = ft_split("un    premier      teste", ' ');
	for (int j = 0; array1[j]; j++)
	{
		printf("%s\n", array1[j]);
		free(array1[j]);
	}
	free(array1);*/


	/*printf("---------------\n");
	char **array2 = ft_split("un    premier  teste    ", ' ');
	for (int i = 0; array2[i]; i++)
	{
		printf("%s\n", array2[i]);
		free(array2[i]);
	}
	free(array2);

	printf("---------------\n");
	char **array3 = ft_split("   un premier teste", ' ');
	for (int i = 0; array3[i]; i++)
	{
		printf("%s\n", array3[i]);
		free(array3[i]);
	}
	free(array3);*/


}
