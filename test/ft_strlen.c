int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

/*int	main()

	__builtin_printf("%d", ft_strlen("string"));
}*/
