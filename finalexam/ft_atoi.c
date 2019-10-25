/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 19:22:45 by tbergkul          #+#    #+#             */
/*   Updated: 2019/08/01 19:35:20 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int result;
	int sign;
	int x;

	x = 0;
	sign = 1;
	result = 0;
	while (str[x] == ' ' || (str[x] >= 9 && str[x] <= 13))
		x++;
	if (str[x] == '-')
		sign = -1;
	if (str[x] == '-' || str[x] == '+')
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		result = result * 10 + str[x] - '0';
		x++;
	}
	return (sign * result);
}

int	main()
{
	char *str;

	str = "-46	5";
	printf("%d", ft_atoi(str));
	printf("\n");
	printf("%d", atoi(str));
	return (0);
}
