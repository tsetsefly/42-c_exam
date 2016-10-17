/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 19:57:16 by dtse              #+#    #+#             */
/*   Updated: 2016/10/10 19:57:17 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void ft_putstr(char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		ft_putchar(str[i]);
// 		i++;
// 	}
// }

// void ft_putnbr(int nb)
// {
// 	long num;

// 	num = nb;
// 	if (num < 0)
// 	{
// 		ft_putchar('-');
// 		num *= -1;
// 	}
// 	if (num > 9)
// 		ft_putnbr(num / 10);
// 	ft_putchar(num % 10 + '0');
// }

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int tmp = 0;

	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

// int main ()
// {
// 	int i = 0;
// 	int tab[10] = {10, 8, 5, 11, 3, 1, 12, 20, -3, 9};

// 	sort_int_tab(tab, 10);
// 	while (i < 10)
// 	{
// 		ft_putnbr(tab[i]);
// 		if (i != 9)
// 			ft_putstr(", ");
// 		i++;
// 	}
// 	ft_putchar('\n');
// 	return (0);
// }