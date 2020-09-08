#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

char ** ft_malloc(int N, int K)
{
	int	i;
	char **buf;

	i = 0;
	buf = (char **)malloc(N * sizeof(char*));
	while (i < N)
	{
		buf[i] = (char *)malloc(K * sizeof(char));
		i++;
	}
	return (buf);
}

void	ft_count(char *argv)
{
	int	N;
	int	M;
	int	fd;
	char	c;
	int	K;

	N = 0;
	M = 0;
	fd = open(argv, O_RDONLY);
	while (read(fd, &c, 1) > 0)
	{
		if (c != '\n')
			M++;
		else
		{
			N++;
			K = M;
			M = 0;
		}
	}
	close(fd);
	printf("%d, %d\n", N, K);
}
