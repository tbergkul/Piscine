/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 17:45:32 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/18 18:38:31 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour > 24 || hour < 0)
		return ;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour >= 0 && hour < 11)
		printf("%d"".00 A.M. AND ""%d"".00 A.M.", hour, (hour + 1));
	else if (hour == 11)
		printf("%d"".00 A.M. AND ""%d"".00 P.M.", hour, (hour + 1));
	else if (hour == 12)
		printf("%d"".00 P.M. AND ""%d"".00 P.M.", hour, (hour - 11));
	else if (hour >= 13 && hour < 23)
		printf("%d"".00 P.M. AND ""%d"".00 P.M.", (hour - 12), (hour - 11));
	else if (hour == 23)
		printf("%d"".00 P.M. AND 0.00 A.M.", (hour - 12));
	else if (hour == 24)
		printf("%d"".00 A.M. AND ""%d"".00 A.M.", (hour - 24), (hour - 23));
	printf("\n");
}
