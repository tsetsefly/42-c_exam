/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 09:24:12 by exam              #+#    #+#             */
/*   Updated: 2016/10/11 09:24:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	int maximum;
	unsigned int i = 0;

	if (len == 0)
		return (0);
	maximum = tab[0];
	while (i < len)
	{
		if (maximum < tab[i])
			maximum = tab[i];
		i++;
	}
	return (maximum);
}