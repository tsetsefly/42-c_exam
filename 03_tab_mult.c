/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 19:29:08 by dtse              #+#    #+#             */
/*   Updated: 2016/10/10 19:34:10 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void ft_putnbr(int nb)
{
	long num;

	num = nb;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + '0');
}

int ft_atoi(char *nb)
{
	int i;
	int neg;
	long num;

	i = 0;
	while (nb[i] < 33)
		i++;
	neg = 1;
	if (nb[i] == '+' || nb[i] == '-')
	{
		if (nb[i] == '-')
			neg *= -1;
		i++;
	}
	num = 0;
	while (nb[i] >= '0' && nb[i] <= '9')
	{
		num = num * 10 + nb[i] - '0';
		i++;
	}
	return (num * neg);
}

void print_stuff(int i, int num, char *c_num)
{
	ft_putnbr(i);
	ft_putstr(" x ");
	ft_putstr(c_num);
	ft_putstr(" = ");
	ft_putnbr(i * num);
}

int main (int argc, char **argv)
{
	int i = 1;
	int num;

	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		while (i < 10)
		{
			print_stuff(i, num, argv[1]);
			if(i != 9)
				ft_putchar('\n');
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
