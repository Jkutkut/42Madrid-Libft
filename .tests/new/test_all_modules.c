#include "libft.h"
#include "get_next_line.h"
#include "ft_printf.h"

int main(void)
{
	ft_printf("hey\n");
	char *str = get_next_line(0);
	ft_printf(str);
	char **s = ft_split("hola que tal", ' ');
	int i = 0;
	while (s[i])
	{
		ft_printf("%s\n", s[i++]);
		free(s[i - 1]);
	}
	free(s);
	free(str);
}