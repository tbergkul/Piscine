/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 00:42:36 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/19 01:37:09 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_alert(void)
{
	write(1, "Alert!!!\n", 9);
}

int		ft_strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] == s2[x] && s1[x] != '\0' && s2 != '\0')
	{
		x++;
	}
	return (s1[x] - s2[x]);
}

void	forbidden_arg(char *str)
{
	if (ft_strcmp(str, "president") == 0)
		ft_alert();
	if (ft_strcmp(str, "attack") == 0)
		ft_alert();
	if (ft_strcmp(str, "Bauer") == 0)
		ft_alert();
}

char	ft_strlowcase(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 65 && str[x] <= 90)
			str[x] = str[x] + 32;
		x++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int		c1;
	int		c2;
	int		c3;
	char	str[100];

	c1 = 1;
	c2 = 0;
	c3 = 0;
	while (argc > c1)
	{
		while (argv[c1][c2])
		{
			if (argv[c1][c2] != ' ')
			{
				str[c3] = argv[c1][c2];
				c3++;
			}
			c2++;
		}
		str[c2] = '\0';
		ft_strlowcase(str);
		forbidden_arg(str);
		c1++;
	}
	return (0);
}
