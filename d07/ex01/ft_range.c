/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 12:43:32 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/18 13:55:25 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int x;

	x = max - min;
	if (min >= max)
		return (NULL);
	result = (int *)malloc(sizeof(x));
	x = 0;
	while (min < max)
	{
		result[x] = min;
		min++;
		x++;
	}
	return (result);
}
