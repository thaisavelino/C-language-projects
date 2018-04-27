
#include <stdio.h>

int		ft_strlen(const char *s);

int	main(void)
{
	char str[6] = "thais";
	size_t	resp;
	resp = ft_strlen(str);
	printf("\n%zu\n", resp);

	return (0);	
}
