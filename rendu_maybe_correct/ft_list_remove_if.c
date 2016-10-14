/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 23:16:25 by dtse              #+#    #+#             */
/*   Updated: 2016/10/13 23:16:26 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
// 	t_list	*list;
// 	t_list	*list_after;
// 	t_list	*list_before;

// 	list = *begin_list;
// 	list_before = *begin_list;
// 	while (list)
// 	{
// 		if ((*cmp)(list->data, data_ref) == 0)
// 		{
// 			list_after = list->next;
// 			free(list);
// 			list_before->next = list_after;
// 			list = list_after;
// 		}
// 		else
// 			list = list->next;
// 	}
	t_list		*free_me;

	if (*begin_list)
	{
		if (cmp((*begin_list)->data, data_ref))
		{
			free_me = *begin_list;
			*begin_list = (*begin_list)->next;
			free(free_me);
			ft_list_remove_if(begin_list, data_ref, cmp);
		}
		else
			ft_list_remove_if(&(*begin_list)->next, data_ref, cmp);
	}
}
