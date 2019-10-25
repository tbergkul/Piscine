/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 18:48:52 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/23 20:50:56 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*new_element;
	t_list	*tmp;
	int		x;

	if (ac <= 0)
		return (NULL);
	tmp = NULL;
	x = 0;
	while (x < ac)
	{
		new_element = ft_create_elem(av[x]);
		new_element->next = tmp;
		tmp = new_element;
		x++;
	}
	return (new_element);
}
