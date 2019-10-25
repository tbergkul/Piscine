/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 16:30:54 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/17 20:13:13 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		x;
	char	*copy;

	x = 0;
	while (src[x] != '\0')
	{
		x++;
	}
	copy = (char *)malloc(x + 1);
	if (copy == NULL)
		return (NULL);
	x = 0;
	while (src[x] != '\0')
	{
		copy[x] = src[x];
		x++;
	}
	copy[x] = '\0';
	return (copy);
}
