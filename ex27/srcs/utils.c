/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 18:48:27 by jaacosta          #+#    #+#             */
/*   Updated: 2024/09/14 18:48:29 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar_errors(char c)
{
	write(2, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar_errors(*str);
		str++;
	}
}

void	display_file(int fd)
{
	size_t	read_bytes;
	char	buffer[1025];

	read_bytes = read(fd, buffer, 1024);
	while (read_bytes > 0)
	{
		write(1, buffer, read_bytes);
		read_bytes = read(fd, buffer, 1024);
	}
}
