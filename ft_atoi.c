/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:38:27 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/18 00:45:11 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	int long long	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		sign = 44 - *str;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - 48);
		i++;
		if (res < 0 && str[0] == '-')
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
