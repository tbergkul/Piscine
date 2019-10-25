/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 17:03:04 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/22 18:34:00 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int x;
	int counter;

	x = 0;
	counter = 0;
	while (tab[x] != '\0')
	{
		if (f(tab[x]) == 1)
			counter++;
		x++;
	}
	return (counter);
}
