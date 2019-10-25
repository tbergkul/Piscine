/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 17:57:39 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/11 17:02:42 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char num);

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	while (d < '9')
	{
		ft_putchar(d);
		ft_putchar(c);
		ft_putchar(' ');
		ft_putchar(b);
		ft_putchar(a);
		ft_putchar(',');
		ft_putchar(' ');
		if (a == '9')
		{
			a = '0';
			b++;
		}
		if (b == '9')
		{
			b = '0';
			c++;
		}
		if (c == '9')
		{
			c = '0';
			d++;
		}
	a++;
	}
	ft_putchar('\n');
}
