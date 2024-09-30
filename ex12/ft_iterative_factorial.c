/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:11:04 by jaacosta          #+#    #+#             */
/*   Updated: 2024/09/09 18:11:06 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	i = nb;
	if (nb < 0 || nb > 12)
		return (0);
	while (i > 1)
	{
		result = result * i;
		i--;
	}
	return (result);
}
