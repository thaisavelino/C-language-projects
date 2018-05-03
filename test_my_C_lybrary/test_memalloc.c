
#include <stdio.h>

void	*ft_memalloc(size_t size);

int		main(void)
{
	size_t	size;
	char	*str;

	size = 8;
	str = ft_memalloc(size);

	printf("\nA alocacao tamanho %zu é:\n%s\n", size, str);
}
