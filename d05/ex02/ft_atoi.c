/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 13:49:18 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/15 18:36:44 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int result;
	int sign;
	int x;

	result = 0;
	sign = 1;
	x = 0;
	if (str[0] == '-')
	{
		sign = -1;
		x++;
	}
	while (str[x] != '\0')
	{
		if (str[x] != 92)
		{
			if ((str[x] >= 65 && str[x] <= 122))
				break ;
			if (str[x] >= 48 && str[x] <= 57)
				result = result * 10 + str[x] - '0';
		}
		x++;
	}
	return (sign * result);
}
