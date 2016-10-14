/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 23:56:01 by dtse              #+#    #+#             */
/*   Updated: 2016/10/13 23:56:02 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		check_prime(int num, int factor)
{
	if (factor == 1)
	{
		return (1);
	}
	else if (num % factor == 0)
	{
		return (0);
	}
	else
	{
		return (check_prime(num, factor - 1));
	}
}

int		ft_find_next_prime(int nb)
{
	int next;

	next = nb;
	if (nb < 3)
	{
		return (2);
	}
	else
	{
		while (!(check_prime(next, next / 2)))
		{
			next++;
		}
		return (next);
	}
}

void	prime_factorizer(unsigned int num)
{
	unsigned int	div;
	unsigned int	og_num;
	unsigned int	bucket;


	div = 2;
	bucket = 1;
	og_num = num;
	if (og_num == 1)
	{
		printf("1");
		return ;
	}
	// printf("og_num: %u\n", og_num);
	// printf("num: %u\n", num);
	// printf("div: %u\n", div);
	// printf("bucket: %u\n", bucket);
	while (bucket != og_num)
	{
		if (num % div == 0)
		{
			printf("%d", div);
			bucket *= div;
			num /= div;
			if (bucket != og_num)
				printf("*");
		}
		if (num % div != 0)
			div = ft_find_next_prime(div + 1);
	}
}

int		main (int argc, char **argv)
{
	if (argc == 2)
	{
		// printf("atoi of arg: %d\n", atoi(argv[1]));
		prime_factorizer(atoi(argv[1]));
	}
	printf("\n");
	return (0);
}
