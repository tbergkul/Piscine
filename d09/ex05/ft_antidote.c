/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 21:44:26 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/18 22:20:40 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	if (i > j && i <= k)
		return (i);
	else if (i > k && j >= i)
		return (i);
	else if (j <= k && j > i)
		return (j);
	else if (k < j && j <= i)
		return (j);
	else if (i < k && j >= k)
		return (k);
	else if (j < k && i >= k)
		return (k);
	return (0);
}
