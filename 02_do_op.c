/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 17:47:10 by dtse              #+#    #+#             */
/*   Updated: 2016/10/10 17:56:46 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
	int a;
	int b;
	char o;

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		o = *argv[2];
		if (o == '+')
			printf("%d", a + b);
		if (o == '-')
			printf("%d", a - b);
		if (o == '/')
			printf("%d", a / b);
		if (o == '*')
			printf("%d", a * b);
		if (o == '%')
			printf("%d", a % b);
	}
	printf("\n");
	return (0);
}
