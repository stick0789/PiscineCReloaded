/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:43:11 by jaacosta          #+#    #+#             */
/*   Updated: 2024/09/10 19:43:13 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_params(int argc, char *argv[])
{
	char	*swap;
	int		i;
	int		sorted;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 1;
		while (i < argc -1)
		{
			if ((ft_strcmp(argv[i], argv[i + 1])) > 0)
			{
				swap = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = swap;
				sorted = 0;
			}
			i++;
		}
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc < 2)
	{
		return (0);
	}
	ft_sort_params(argc, argv);
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
}
