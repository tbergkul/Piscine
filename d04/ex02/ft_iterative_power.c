/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 11:13:05 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/13 11:33:01 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int x;

	x = 1;
	if (power < 0)
	{
		return (0);
	}
	else
	{
		while (power >= 1)
		{
			x = x * nb;
			--power;
		}
		return (x);
	}
}
