/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/24 19:41:50 by dtse              #+#    #+#             */
/*   Updated: 2016/10/24 19:41:51 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int		num_digits(long num)
{
	int digits = 0;

	if (num == 0 || num == -0)
		return (1);
	while (num > 0)
	{
		digits++;
		num /= 10;
	}
	// printf("%d\n", digits);
	return (digits);
}

char	*ft_itoa(int nbr)
{
	int neg = 0;
	long num;
	int digits;
	char *str;
	int i;
	int end = 0;

	num = nbr;
	if (num < 0)
	{
		neg = 1;
		num *= -1;
	}
	digits = num_digits(num);
	str = (char *)malloc(sizeof(char) * (digits + neg + 1));
	// printf("digits + neg + 1 = %d\n", digits + neg + 1);
	str[digits + neg] = '\0';
	i = digits + neg - 1;
	if (neg)
	{
		str[0] = '-';
		end = 1;
	}
	while (i >= end)
	{
		str[i] = num % 10 + '0';
		num /= 10;
		i--;
	}
	return (str);
}

// int main ()
// {
// 	int num = -2147483648;
// 	char *str;

// 	str = ft_itoa(num);
// 	printf("%s\n", str);
// 	return (0);
// }
