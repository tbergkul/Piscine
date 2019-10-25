/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 14:01:45 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/25 14:06:17 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	int		file;
	char	character;

	if (argc != 2)
	{
		if (argc == 1)
			write(2, "File name missing.\n", 19);
		if (argc > 2)
			write(2, "Too many arguments.\n", 20);
		return (1);
	}
	file = open(argv[1], O_RDONLY);
	if (file < 0)
	{
		write(2, "Failed to open file\n", 20);
		return (1);
	}
	while (read(file, &character, 1) != 0)
		write(1, &character, 1);
	if (close(file) < 0)
	{
		write(2, "Failed to close file\n", 21);
		return (1);
	}
	return (0);
}
