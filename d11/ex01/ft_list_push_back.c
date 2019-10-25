/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 14:32:31 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/23 20:53:18 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new_element;

	new_element = *begin_list;
	if (!new_element)
		*begin_list = ft_create_elem(data);
	else
	{
		while ((new_element)->next)
		{
			new_element = new_element->next;
		}
		new_element->next = ft_create_elem(data);
	}
}
