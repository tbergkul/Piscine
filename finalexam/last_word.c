/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 20:07:40 by tbergkul          #+#    #+#             */
/*   Updated: 2019/08/01 20:25:28 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int x;
	int	y;

	x = 0;
	y = 0;
	if (argc == 2)
	{
		while (argv[1][x])
		{
			if ((argv[1][x] == ' ' || argv[1][x] == '\t' || argv[1][x] == '\r' || argv[1][x] == '\v' || argv[1][x] == '\n' || argv[1][x] == '\f') && (argv[1][x + 1] > 32 && argv[1][x + 1] < 127))
				y = x + 1;
			x++;
		}
		while (argv[1][y] > 32 && argv[1][y] < 127)
		{
			write(1, &argv[1][y], 1);
			y++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
