/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 09:04:35 by exam              #+#    #+#             */
/*   Updated: 2016/10/25 09:04:37 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *t;

	if (*begin_list)
	{
		if (((*cmp)(((*begin_list)->next), data_ref)) == 0)
		{
			t = (*begin_list);
			(*begin_list) = (*begin_list)->next;
			free(t);
			ft_list_remove_if(begin_list, data_ref, cmp);
		}
		else
			ft_list_remove_if(&((*begin_list)->next), data_ref, cmp);
	}
}
