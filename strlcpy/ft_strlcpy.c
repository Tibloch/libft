#include <stddef.h>
#include <bsd/string.h>

int	ft_strlen(char *str);
int	ft_atoi(char *str);

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen((char *) src);
	while (src[i] && size > 1)
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	if (size > 0)
		dst[i] = '\0';
	return (len);
}

int	main(int ac, char **av)
{
	(void)ac;
	char	*dst = av[1];
	char	*src = av[2];
	int	size = ft_atoi(av[5]);
	int	ret;

	ret = ft_strlcpy(dst, src, size);
	__builtin_printf("l_src = %d\ndst = %s\n\n", ret, dst);

	char	*dst2 = av[3];
	char	*src2 = av[4];
	int	size2 = ft_atoi(av[5]);
	int	ret2;

	ret2 = strlcpy(dst2, src2, size2);
	__builtin_printf("l_src2 = %d\ndst2 = %s\n", ret2, dst2);

}


