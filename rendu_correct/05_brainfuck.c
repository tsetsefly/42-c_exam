/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 16:39:49 by dtse              #+#    #+#             */
/*   Updated: 2016/10/17 16:39:50 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void				brainfuck(char *input)
{
	unsigned char	stack[2048];
	unsigned char	*ptr = stack;
	size_t			i = 0;
	size_t			loop;

	while (i < 2048)
		stack[i++] = 0;
	i = 0;
	while (input[i])
	{
		if (input[i] == '>')
			++ptr;
		else if (input[i] == '<')
			--ptr;
		else if (input[i] == '+')
			++*ptr;
		else if (input[i] == '-')
			--*ptr;
		else if (input[i] == '.')
			write(1, ptr, 1);
		else if (input[i] == '[' && *ptr == 0)
		{
			loop = 0;
			i++;
			while (input[i])
			{
				if (input[i] == '[')
					loop++;
				if (input[i] == ']' && loop == 0)
					break ;
				else if (input[i] == ']')
					loop--;
				i++;
			}
		}
		else if (input[i] == ']' && *ptr)
		{
			loop = 0;
			i--;
			while (input[i])
			{
				if (input[i] == ']')
					loop++;
				if (input[i] == '[' && loop == 0)
					break ;
				else if (input[i] == '[')
					loop--;
				i--;
			}
		}
		i++;
	}
}

int					main(int argc, char **argv)
{
	if (argc == 2)
		brainfuck(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
