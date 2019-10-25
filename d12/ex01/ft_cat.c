/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 14:31:12 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/25 14:34:01 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/errno.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>

int		file_missing(void)
{
	write(2, "File name missing.\n", 19);
	return (errno);
}

int		main(int argc, char **argv)
{
	int		x;
	int		file;
	char	character;

	if (argc == 1)
		file_missing();
	x = 0;
	while (x++ < (argc - 1))
	{
		file = open(argv[x], O_RDONLY);
		if (file < 0)
		{
			write(2, "Failed to open file\n", 20);
			return (errno);
		}
		while (read(file, &character, 1) != 0)
			write(1, &character, 1);
		if (close(file) < 0)
		{
			write(2, "Failed to close file\n", 21);
			return (errno);
		}
	}
	return (0);
}
