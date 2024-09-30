/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 20:19:16 by jaacosta          #+#    #+#             */
/*   Updated: 2024/08/08 20:34:29 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char	ne;
	char	po;

	ne = 'N';
	po = 'P';
	if (n < 0)
		ft_putchar(ne);
	else
		ft_putchar(po);
}
