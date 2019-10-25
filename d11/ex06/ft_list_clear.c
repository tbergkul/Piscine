/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbergkul <tbergkul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:33:58 by tbergkul          #+#    #+#             */
/*   Updated: 2019/07/24 19:08:10 by tbergkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *element;
	t_list *other_element;

	if (!*begin_list)
		return ;
	element = *begin_list;
	while (element)
	{
		other_element = element->next;
		free(element);
		element = other_element;
	}
	*begin_list = NULL;
}
