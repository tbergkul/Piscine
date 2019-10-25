/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 10:08:41 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/16 11:57:12 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int x;
	unsigned int y;
	unsigned int z;

	x = 0;
	y = 0;
	z = 0;
	while (s1[x] != '\0' && x < n)
	{
		y = y + s1[x];
		x++;
	}
	x = 0;
	while (s2[x] != '\0' && x < n)
	{
		z = z + s2[x];
		x++;
	}
	return (y - z);
}
