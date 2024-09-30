/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:17:22 by jaacosta          #+#    #+#             */
/*   Updated: 2024/09/10 16:17:23 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (nb > i)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int main()
{
    double result;
    
    result = ft_sqrt(22);
    printf("la raiz cuadrada es: %f\n", result);

    return 0;
}
*/
