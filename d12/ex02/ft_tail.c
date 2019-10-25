/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 16:07:19 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/25 19:15:49 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/errno.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>/*ta bort de har*/

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	ft_print(char *str, int nb, int file)
{
	int		counter;
	int		i;
	char	character;

	i = 0;
	counter = 0;
	str = (char*)malloc(sizeof(char) * nb);
	while (str[i++] != '\0')
		counter++;
	counter = counter - nb;
	printf("COUNTER DONE");
	while (str[counter] != '\0')
	{
		read(file, str[counter], 1);
		write(1, str[counter], 1);
		counter++;
	}
	printf("SHOULD HAVE PRINTED");
	free(str);
	return (0);
}

int	ft_pro_atoi(char *str)
{
	int	i;
	int number;

	i = 0;
	number = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
			|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if ((str[i] == 45 || (str[i] == 43)))
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = number * 10 + str[i] - 48;
		i++;
	}
	printf("ATOI LYCKADES");
	return (number);
}

int	main(int argc, char **argv)
{
	int	x;
	int	file;
	int	nb;
	int argument;
	char character;

	if (argc == 1 || argc == 2)
		return (errno);
	nb = ft_pro_atoi(argv[2]);
	x = 0;
	argument = 2;
	while (x++ < (argc - 1))
	{
		file = open(argv[argument], O_RDONLY);
		if (file < 0)
			return (errno);
		printf("COULD OPEN FILE");
		if (argc >= 4)
			write(1, "\n==> argv[x] <==\n", 18);
		ft_print(argv[argument], nb, file);
		argument++;
	}
	printf("KLAR");
	return (0);
}
