/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 18:52:17 by tbergkul          #+#    #+#             */
/*   Updated: 2019/08/01 18:58:45 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int x;
	int i;

	if (argc == 2)
	{
		x = 0;
		while (argv[1][x])
			x++;
		x--;
		while (argv[1][i])
		{
			write(1, &argv[1][x], 1);
			x--;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
