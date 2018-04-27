#include <stdio.h>

void	ft_bzero(void *s, size_t n);

int		main(void)
{
	char str[16] = "zerengue isolda";
	printf("\nantes: %s\n", str);
	ft_bzero(str, 5);
	printf("\ndepois: %s\n", str);

	return (0);
}
