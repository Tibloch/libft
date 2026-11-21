/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:38:27 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/20 19:42:32 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int				i;
	int				sign;
	int long long	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		sign = 44 - *nptr;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = (res * 10) + (nptr[i] - 48);
		i++;
		if (res < 0 && nptr[0] == '-')
			return (0);
		if (res < 0)
			return (-1);
	}
	return (res * sign);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main()
{
	printf("%d\n", ft_atoi("21474836"));
	printf("%d\n", atoi("21474836"));
	printf("%d\n", ft_atoi("-21474836"));
	printf("%d\n\n", atoi("-21474836"));
	
	printf("%d\n", ft_atoi("2147483651"));
	printf("%d\n", atoi("2147483651"));
	printf("%d\n", ft_atoi("-2147483652"));
	printf("%d\n\n", atoi("-2147483652"));

	printf("%d\n", ft_atoi("9223372036854775806"));
	printf("%d\n", atoi("9223372036854775806"));
	printf("%d\n", ft_atoi("-9223372036854775806"));
	printf("%d\n\n", atoi("-9223372036854775806"));
	
	printf("%d\n", ft_atoi("  9223372036854775810"));
	printf("%d\n", atoi("   9223372036854775810"));
	printf("%d\n", ft_atoi("  -9223372036854775810"));
	printf("%d\n\n", atoi("  -9223372036854775810"));

	printf("%d\n", ft_atoi("11111111111111111111111111111"));
	printf("%d\n", atoi("11111111111111111111111111111"));
	printf("%d\n", ft_atoi("    -11111111111111111111111111"));
	printf("%d\n\n", atoi("    -11111111111111111111111111"));
}*/
