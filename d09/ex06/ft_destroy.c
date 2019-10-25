/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 22:43:58 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/18 23:28:35 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int x;
	int i;

	x = 0;
	i = 0;
	while (factory[x])
	{
		while (factory[x][i])
		{
			free(factory[x][i]);
			i++;
		}
		free(factory[x]);
		x++;
	}
	free(factory);
}
