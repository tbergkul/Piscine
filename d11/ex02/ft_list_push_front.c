/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 17:04:34 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/23 20:52:43 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_element;

	if (!*begin_list)
		*begin_list = ft_create_elem(data);
	else
	{
		new_element = ft_create_elem(data);
		new_element->next = *begin_list;
		*begin_list = new_element;
	}
}
