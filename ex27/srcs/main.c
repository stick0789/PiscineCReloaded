/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 18:44:02 by jaacosta          #+#    #+#             */
/*   Updated: 2024/09/14 18:44:06 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str);

void	display_file(int fd);

int	main(int argc, char *argv[])
{
	int	fd;

	if (argc != 2)
	{
		if (argc == 1)
			ft_putstr("File name missing.\n");
		else
			ft_putstr("Too many arguments.\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("Cannot read file.\n");
		return (0);
	}
	display_file(fd);
	close(fd);
	return (0);
}
