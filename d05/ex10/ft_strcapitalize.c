/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:01:57 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/16 20:03:20 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] > 64 && str[x] < 91)
			str[x] = str[x] + 32;
		x++;
	}
	x = 0;
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
		x++;
	}
	while (str[x] != '\0')
	{
		if (str[x - 1] == 32 || str[x - 1] == 45 || str[x - 1] == 43)
			if (str[x + 1] > 96 && str[x + 1] < 123)
				str[x] = str[x] - 32;
		x++;
	}
	return (str);
}
