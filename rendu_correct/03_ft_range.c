/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 09:43:40 by exam              #+#    #+#             */
/*   Updated: 2016/10/11 09:43:41 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int i = 0;
	int len;
	int *array;

	if (start > end)
		len = start - end + 1;
	if (end > start)
		len = end - start + 1;
	if (start == end)
		len = 1;
	if (!(array = (int *)malloc(len * sizeof(int))))
		return (0);
	if (start > end)
		while (i < len)
		{
			array[i] = start;
			i++;
			start--;
		}
	if (end > start)
		while (i < len)
		{
			array[i] = start;
			i++;
			start++;
		}
	if (start == end)
		array[0] = start;
	return (array);
}
