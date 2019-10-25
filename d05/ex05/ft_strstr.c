/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 20:14:48 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/15 21:02:38 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int x;
	int y;

	x = 0;
	y = 0;
	if (*to_find == '\0')
		return (str);
	while (str[x] != '\0')
	{
		while (str[x + y] == to_find[y])
		{
			y++;
			if (to_find[y] == '\0')
				return (str[x]);
		}
		x++;
	}
	return (0);
}
