/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 20:48:06 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/18 21:41:50 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_rot42(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] <= 'Z') && (str[x] >= 'A'))
		{
			if (str[x] >= 'K')
				str[x] = str[x] - 10;
			else
				str[x] = str[x] + 16;
		}
		else if ((str[x] <= 'z' && str[x] >= 'a'))
		{
			if (str[x] >= 'k')
				str[x] = str[x] - 10;
			else
				str[x] = str[x] + 16;
		}
		x++;
	}
	return (str);
}
