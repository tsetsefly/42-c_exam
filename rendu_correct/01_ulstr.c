/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 17:26:29 by dtse              #+#    #+#             */
/*   Updated: 2016/10/10 17:39:16 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char reverse_case(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int main (int argc, char **argv)
{
	int i = 0;
	char c;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			c = reverse_case(argv[1][i]);
			write(1, &c, 1);
			i++;
		}		
	}
	write(1, "\n", 1);
	return (0);
}
