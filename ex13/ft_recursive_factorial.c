/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:04:00 by jaacosta          #+#    #+#             */
/*   Updated: 2024/09/10 12:04:02 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb <= 1)
		return (result);
	if (nb > 1)
	{
		result = result * nb * ft_recursive_factorial(nb -1);
	}
	return (result);
}
/*
int main()
{
    int result;
    
    result = ft_recursive_factorial(13);
    printf("el resultado factorial es: %d\n", result);

    return 0;
}
*/
