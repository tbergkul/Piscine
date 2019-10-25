/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 19:08:10 by tbergkul          #+#    #+#             */
/*   Updated: 2019/08/01 19:19:50 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int x;

	if (argc == 2)
	{
		x = 0;
		while (argv[1][x])
		{	
			if ((argv[1][x] >= 'a' && argv[1][x] <= 'y') || (argv[1][x] >= 'A' && argv[1][x] <= 'Y'))
				ft_putchar(argv[1][x] + 1);
			else if (argv[1][x] == 'z' || argv[1][x] == 'Z')
				ft_putchar(argv[1][x] - 25);
			else
				ft_putchar(argv[1][x]);
			x++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
