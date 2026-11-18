/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 21:35:40 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/16 00:28:40 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	fill_arr(char *array, int long save, int ct, int sign)
{
	if (save < 0)
	{
		array[0] = '-';
		save = -save;
	}
	array[ct] = '\0';
	ct--;
	while (ct >= sign)
	{
		array[ct] = (save % 10) + 48;
		save = save / 10;
		ct--;
	}
}

char	*ft_itoa(int n)
{
	int long	save;
	char		*array;
	int			ct;
	int			sign;

	sign = 0;
	ct = 1;
	save = n;
	if (n < 0)
	{
		ct++;
		sign = 1;
	}
	while (n / 10 != 0)
	{
		n = n / 10;
		ct++;
	}
	array = malloc(sizeof(char) * (ct + 1));
	if (!array)
		return (NULL);
	fill_arr(array, save, ct, sign);
	return (array);
}

/*int	main()
{
	char *array0 = ft_itoa(0);
	printf("%s\n", array0);
	free(array0);


	char *array1 = ft_itoa(2147483647);
	printf("%s\n", array1);
	free(array1);


	char *array2 = ft_itoa(-2147483648);
	printf("%s\n", array2);
	free(array2);


	char *array4 = ft_itoa();
	printf("%s\n", array4);
	free(array4);



}*/
