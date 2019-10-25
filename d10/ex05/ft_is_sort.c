/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 17:41:04 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/23 11:30:39 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int x;
	int y;

	x = 0;
	y = 1;
	while (x < length)
	{
		if (f(tab[x], tab[y]) > 0)
			return (0);
		x++;
		y++;
	}
	return (1);
}
