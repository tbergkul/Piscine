/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 14:07:27 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/18 16:35:06 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int x;
	int *array_of_ints;

	x = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array_of_ints = (int *)malloc(sizeof(x));
	x = 0;
	while (min < max)
	{
		array_of_ints[x] = min;
		min++;
		x++;
	}
	*range = array_of_ints;
	return (x);
}
