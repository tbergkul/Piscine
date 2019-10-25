/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 02:43:35 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/19 02:52:36 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int i;
	int j;
	int k;
	int l;

	i = ***a;
	j = *b;
	k = *******c;
	l = ****d;
	***a = j;
	*b = l;
	*******c = i;
	****d = k;
}