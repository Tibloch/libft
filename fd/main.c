#include <fcntl.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

int	main(int ac, char **av)
{
	(void)ac;
	int fd = open(av[1], O_WRONLY, S_IRUSR);
	ft_putchar_fd('0', fd);
	write(fd, "\n", 1);
	
	ft_putstr_fd("string", fd);

	ft_putendl_fd("new line", fd);

	ft_putnbr_fd(1, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(0, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(-1, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(2147483647, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(-2147483648, fd);
	close(fd);
}
