/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 14:08:36 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/22 16:45:54 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int x;
	int *array;

	x = 0;
	array = (int*)malloc(sizeof(int) * length);
	while (x < length)
	{
		array[x] = (*f)(tab[x]);
		x++;
	}
	return (array);
}
