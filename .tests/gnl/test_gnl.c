#include "libft.h"
#include <fcntl.h>
#include <stdio.h>


int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	
	int fd;
	int i;

	i = atoi(argv[2]);
	if ((fd = open(argv[1], O_RDONLY)) == -1)
	{
		printf("Could not open \"%s\"\n", argv[1]);
		exit(0);
	}

	while (--i)
	{
		free(get_next_line(fd));
	}
	char *line = get_next_line(fd);
	printf("%s", line);
	while (line) {
		free(line);
		line = get_next_line(fd);
	}
	return (0);
}
