/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 19:20:53 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/16 11:32:26 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;
	unsigned int y;

	x = 0;
	while (x < n)
	{
		if (src[x] != '\0')
			dest[x] = src[x];
		if (src[x] == '\0')
		{
			dest[x] = '\0';
			y = x;
			while (y < n)
			{
				dest[y] = '\0';
				y++;
			}
		}
		x++;
	}
	return (dest);
}
