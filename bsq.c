/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btuong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 19:46:04 by btuong            #+#    #+#             */
/*   Updated: 2020/09/07 22:07:09 by btuong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int		main(int argc, char *argv[])
{
	int i;
	int fd;
	char **buf;
	(void)argc;
	int count;
	char c;
	int j;
	i = 0;
	j = 0;
	count = 0;
	fd = open(argv[1], O_RDONLY);
	while (read(fd, &c, 1 != 0))
		count++;
	close (fd);
	buf =  malloc(sizeof(char*) * count);
	fd = open(argv[1], O_RDONLY);
	while (read(fd, buf + i, 1) != 0)
	{
		i++;
	}
	close (fd);
	buf[i] = '\0';
	i = 0;
	while (buf[i] != '\0')
	{
		write(1, &buf[i], 1);
		i++;
	}
	return (0);
}
