/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 00:46:59 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/22 21:36:14 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_word(char const *s, char c)
{
	int	i;
	int	ct;

	i = 0;
	ct = 0;
	while (s && s[i])
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

static int	count_letter(char const *s, char c, int j)
{
	int	ct;

	ct = 0;
	while (s[j] == c)
		j++;
	while (s[j] && s[j] != c)
	{
		j++;
		ct++;
	}
	return (ct);
}

static void	fill_array(char *str, char const *s, char c, int *start)
{
	int	i;

	i = 0;
	while (s[*start] == c)
		(*start)++;
	while (s[*start] && s[*start] != c)
	{
		str[i] = s[*start];
		(*start)++;
		i++;
	}
	str[i] = '\0';
}

static void	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		ct_w;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	ct_w = count_word(s, c);
	array = malloc(sizeof(char *) * (ct_w + 1));
	if (!array)
		return (NULL);
	while (ct_w-- > 0)
	{
		array[i] = malloc(sizeof(char) * (count_letter(s, c, j) + 1));
		if (!array[i])
		{
			free_array(array);
			return (NULL);
		}
		fill_array(array[i++], s, c, &j);
	}
	array[i] = NULL;
	return (array);
}

/*#include <stdio.h>

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


	printf("-------------\n");
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
	i = 0;



	printf("-------------\n");
	char **arr4 = ft_split("", ' ');
	while (arr4[i])
	{
		printf("%s\n", arr4[i]);
		free(arr4[i]);
		i++;
	}
	free(arr4);
	i = 0;



	printf("-------------\n");
	char **arr5 = ft_split(NULL, ' ');
	if (arr5 == NULL)
		printf("NULL\n");	
	else
		while (arr5[i])
		{
			printf("%s\n", arr5[i]);
			free(arr5[i]);
			i++;
		}
	i = 0;


	char **array0 = ft_split("un premier teste", ' ');
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
	free(array1);


	printf("---------------\n");
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
	free(array3);


}*/
