/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 23:06:17 by dtse              #+#    #+#             */
/*   Updated: 2016/11/06 23:06:19 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h> // REMOVE!!!

// malloc + long
// handle 0
// handle neg
// handle rest
// add negative sign
// strrev

char *strrev(char *array)
{
	int i = 0;
	int len;
	int while_len;
	char tmp;

	while (array[i])
		i++;
	len = i;
	while_len = i - 1;
	i = 0;
	while (i < len / 2)
	{
		tmp = array[i];
		array[i] = array[while_len];
		array[while_len] = tmp;
		i++;
		while_len--;
	}
	return (array);
}

char	*ft_itoa_base(int value, int base)
{
	int i = 0;
	int neg = 0;
	int rem;
	char *str;
	long num;

	num = value;
	str = (char *)malloc(sizeof(char) * 35);
	if (num == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (num < 0)
	{
		num *= -1;
		if (base == 10)
			neg = 1;
	}
	while (num != 0)
	{
		rem = num % base;
		str[i++] = (rem > 9) ? (rem - 10) + 'A' : rem + '0';
		num /= base;
	}
	if (neg)
		str[i++] = '-';
	str[i] = '\0';
	return (strrev(str));
}

// int main () // REMOVE!!!
// {
// 	printf("Base 10: 1567        = %s [1567]\n", ft_itoa_base(1567, 10));
// 	printf("Base 10: -1567       = %s [-1567]\n", ft_itoa_base(-1567, 10));
// 	printf("Base 2:  1567        = %s [11000011111]\n", ft_itoa_base(1567, 2));
// 	printf("Base 8: 1567         = %s [3037]\n", ft_itoa_base(1567, 8));
// 	printf("Base 16: 1567        = %s [61F]\n", ft_itoa_base(1567, 16));
// 	printf("Base 10: -2147483648 = %s [-2147483648]\n", ft_itoa_base(-2147483648, 10));
// 	printf("Base 2: 0            = %s [0]\n", ft_itoa_base(0, 2));
// 	return (0);
// }