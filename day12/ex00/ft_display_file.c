/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btymoshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 13:00:42 by btymoshc          #+#    #+#             */
/*   Updated: 2017/08/10 13:00:43 by btymoshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		disp_file(int fd)
{
	char	buff;

	while (read(fd, &buff, 1) != 0)
		write(1, &buff, 1);
}

void		ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int			main(int argc, char **argv)
{
	int		fd;

	if (argc != 2)
	{
		if (argc == 1)
			ft_putstr("File name missing.\n");
		if (argc > 2)
			ft_putstr("Too many arguments.\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	disp_file(fd);
	close(fd);
	return (0);
}
