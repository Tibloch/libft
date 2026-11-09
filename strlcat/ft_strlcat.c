#include <stddef.h>
#include <bsd/string.h>

int	ft_atoi(char *str);
int	ft_strlen(char *str);

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;	
	int	len;

	len = ft_strlen(dst);
	i = 0;
	while ((src[i] && ((int)size - len - 1) > i) || (((int)size < 0) && src[i]))
		{
		dst[len + i] = (char)src[i];
		i++;
	}
	if (size > 0)
		dst[len + i] = '\0';
	if ((int)size < len && (int)size >= 0)
		return (size + ft_strlen((char *)src));
	return (len + ft_strlen((char *)src));
}

int	main(int ac, char **av)
{
	(void)ac;
	int	len;
	int	size = ft_atoi(av[1]);
	char	dst[20] = "";
	char	src[] = "";
		
	len = ft_strlcat(dst, src, size);
	__builtin_printf("dst = %s\nlen = %d\n\n", dst, len);

	int	len2;	
	char	dst2[20] = "";
	char	src2[] = "";
		
	len2 = strlcat(dst2, src2, size);
	__builtin_printf("dst2 = %s\nlen2 = %d\n\n", dst2, len2);
	return (0);
}
