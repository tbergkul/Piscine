/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 18:00:55 by tbergkul          #+#    #+#             */
/*   Updated: 2019/08/01 19:00:57 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int x;

	if (argc == 2)
	{
		x = 0;
		while (argv[1][x] == '\r' || argv[1][x] == ' ' ||
					argv[1][x] == '\t' || argv[1][x] == '\0' ||
					argv[1][x] == 'v' || argv[1][x] == '\n' || argv[1][x] == '\f')
			x++;
		while (argv[1][x])
		{
			if (argv[1][x] == ' ' || argv[1][x] == '\t' || argv[1][x] == '\0')
				break ;
			write(1, &argv[1][x], 1);
			x++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
